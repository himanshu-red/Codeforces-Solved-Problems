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
    ull a, b, c;
    cin >> a >> b >> c;
    ll min = 0;
    ll rem1 = a % c;
    ll rem2 = b % c;
    ll total = a / c + b / c;
    if ((rem1 + rem2) / c > 0)
    {
        min = c -  ((c - rem1 < c - rem2) ? (rem1) : (rem2));
        total++;
    }
    cout << total << " " << min << endl;
}
