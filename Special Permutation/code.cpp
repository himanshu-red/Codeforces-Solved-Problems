#include <bits/stdc++.h>
using namespace std;
bool checkRange(int n, int a, int b)
{
    if (((a >= 1 && a <= n/2) && (b >= 1 && b <= n/2)) || ((a >= n/2+1 && a <= n) &&( b >= n/2+1 && b <= n)))   return false; 
    return true; 
}
int main()
{
    int t, n, a, b;
    cin >> t;
    while (t--)
    {
        cin >> n >> a >> b;
        if ((a >= 1 && a <= n / 2 + 1) && (b <= n && b > n / 2 - 1) ? (checkRange(n, a, b)) : (false))
        {
            cout << a << " ";
            for (int i = n / 2 + 1; i <= n; i++)
            {
                if (i == b || i == a)
                    continue;
                cout << i << " ";
            }
            for (int i = 1; i <= n / 2; i++)
            {
                if (i == a || i == b)
                    continue;
                cout << i << " ";
            }
            cout << b << endl;
        }
        else
            cout << -1 << endl;
    }
}
