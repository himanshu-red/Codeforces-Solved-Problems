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
        ll a, b;
        cin >> a >> b;
        if (max (a,b) > 3 * min(a,b))
            cout << min(a, b) << endl; 
        else 
            cout << (a + b) / 4 << endl; 
    }
}
