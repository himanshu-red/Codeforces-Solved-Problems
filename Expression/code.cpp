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
    int a, b, c;
    cin >> a >> b >> c;
    int m = a + b + c;
    int n = (a + b) * c;
    int o = a * (b + c);
    int p = a *b * c; 
    int q = a + b * c; 
    int r = a * b + c; 
    cout << max({m, n, o, p});
}
