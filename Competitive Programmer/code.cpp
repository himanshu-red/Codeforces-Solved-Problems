#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using ld = long double;
#define endl '\n'

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int sum = 0, zeroes = 0;
        bool even = false;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '0')
                zeroes++;
            else if (str[i] == '0' || str[i] == '2' || str[i] == '4' || str[i] == '6' || str[i] == '8')
                even = true;
            sum += (str[i] - 48);
        }
        if (sum % 3 == 0 && ((even && zeroes) || (!even && zeroes > 1)))
            cout << "red" << endl;
        else
            cout << "cyan" << endl;
    }
}
