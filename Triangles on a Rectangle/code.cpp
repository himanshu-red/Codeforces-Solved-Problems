#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long; 
int getDist()
{
    int t, a, b, input;
    cin >> t;
    cin >> a;
    for (int i = 1; i < t - 1; i++)
        cin >> input;
    cin >> b;
    return b - a;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w, h;
        cin >> w >> h;
        int d1, d2;
        ll a1 = 0, a2 = 0;
        d1 = getDist();
        d2 = getDist();
        a1 = (d1 > d2) ? (1ll * d1 * h) : (1ll * d2 * h);
        d1 = getDist();
        d2 = getDist();
        a2 = (d1 > d2) ? (1ll * d1 * w) : (1ll * d2 * w);
        cout << ((a1 > a2) ? (a1) : (a2)) << endl;
    }
}
