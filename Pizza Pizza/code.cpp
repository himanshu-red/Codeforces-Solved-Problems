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
    ull n;
    cin >> n;
    n++;
    if (n == 1)
        cout << 0 << endl;
    else if (n % 2)
        cout << n << endl;
    else
        cout << n / 2 << endl;
}
