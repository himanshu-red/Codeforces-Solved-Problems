#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, a, b;
        ll sum = 0;
        cin >> x >> y >> a >> b;
        if (2 * a < b)
        {
            sum = 1ll * x * a + 1ll * y * a;
        }
        else
        {
            sum = (x > y) ? (1ll * (x - y) * a) : (1ll * (y - x) * a);
            sum += (x > y) ? (1ll * y * b) : (1ll * x * b);  
        }
        cout << sum << endl; 
    }
}
