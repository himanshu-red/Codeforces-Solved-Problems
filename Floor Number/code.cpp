#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, x;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        cout << ((n <= 2) ? (1) : (1 + (((n - 2) % x == 0) ? ((n - 2) / x) : ((n - 2) / x + 1)))) << endl;
    }
}
