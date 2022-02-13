#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using ld = long double;
#define endl '\n'

int makeNum(int digit, int digitCount)
{
    int num = digit;
    while (digitCount != 1)
    {
        num *= 10;
        num += digit;
        digitCount--;
    }
    return num;
}

int main()
{
    vector<int> v;
    int digit = 0;
    int digitCount = 1;
    int last = 1e9;
    int num = 0;
    while (num <= 999999999)
    {
        if (digit == 9)
        {
            digit = 1;
            digitCount++;
        }
        else
            digit++;
        num = makeNum(digit, digitCount);
        v.push_back(num);
    }
    // printVec(v);
    int t;
    cin >> t;
    while (t--)
    {
        int input;
        cin >> input;
        auto output = (lower_bound(v.begin(), v.end(), input)) - v.begin();
        cout << (v[output] == input ? output + 1 : output) << endl;
    }
}
