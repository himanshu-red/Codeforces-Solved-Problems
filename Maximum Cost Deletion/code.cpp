/*-----------------------------------------HIMANSHU RANJAN---------------------------------------*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
#define endl '\n'
#define watch(x) cerr << (#x) << " is " << (x) << endl;
template <class T>
void printVec(T &v)
{
    cout << "[ ";
    for (auto &i : v)
        cout << i << " ";
    cout << " ]" << endl;
}
int getVal(vector<int> &v, int a, int b)
{
    int total = 0;
    for (auto &i : v)
    {
        total += i * a + b;
    }
    return total;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        string str;
        cin >> str;
        int zeroes = 0, ones = 0, count = 1;
        vector<int> vz, vo;
        str[0] == '1' ? ones++ : zeroes++;
        for (int i = 1; i < str.size(); i++)
        {
            if (str[i] == '0')
                zeroes++;
            else if (str[i] == '1')
                ones++;
            if (str[i] == str[i - 1])
                count++;
            else
            {
                if (str[i - 1] == '1')
                    vo.push_back(count);
                else
                    vz.push_back(count);
                count = 1;
            }
        }
        if (str[n - 1] == '1')
            vo.push_back(count);
        else
            vz.push_back(count);
        int forZeroes = getVal(vz, a, b);
        int forOnes = getVal(vo, a, b);
        int ans1 = (n * (a + b));
        int ans2 = forZeroes + forOnes;
        int ans3 = forZeroes + (ones ? (ones * a + b) : 0);
        int ans4 = forOnes + (zeroes ? (zeroes * a + b) : 0);

        cout << max({ans1, ans2, ans3, ans4}) << endl;
    }
}
