#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        cout << ((a - b > 1) ? ("Yes") : ("NO")) << endl;
    }
}
