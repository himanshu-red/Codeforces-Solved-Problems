/*-----------------------------------------HIMANSHU RANJAN---------------------------------------*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
#define endl '\n'
#define deb(x) cerr << (#x) << " is " << (x) << endl;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        ull sum = 0;
        cin >> n >> k;
        vector<int> v(k);
        for (auto &i : v)
        {
            cin >> i;
            i = n - i;
            sum += i;
        }
        sort(v.begin(), v.end());
        if (sum < n)
        {
            cout << k << endl;
        }
        else
        {
            int i = 0;
            while (i < k && n > v[i])
            {
                n -= v[i];
                i++;
            }
            cout << i << endl;
        }
    }
}
