/*-----------------------------------------HIMANSHU RANJAN---------------------------------------*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
#define endl '\n'
#define watch(x) cerr << (#x) << " is " << (x) << endl;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a;
        cin >> b;
        int maxLen = 0;
        for (int i = 0; i < a.size(); i++)
        {
            for (int j = 0; j < b.size(); j++)
            {
                int k = i;
                int l = j; 
                while (k < a.size() && l < b.size() && a[k] == b[l])
                    k++, l++; 
                if (maxLen < k - i)
                    maxLen = k - i;
            }
        }
        cout << a.size() + b.size() - (2 * maxLen) << endl;
    }
}
