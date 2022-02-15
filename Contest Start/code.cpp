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
        ll n, x, t;
        cin >> n >> x >> t;
        int  overlaps = t / x;
        ll range = n - overlaps;
        (range < 0) ? (range = 0) : (range); 
        ll total = range * overlaps;
        n -= (range + 1);
        total +=  (n * (n + 1)) / 2;   
        cout << total << endl;
    }
}
