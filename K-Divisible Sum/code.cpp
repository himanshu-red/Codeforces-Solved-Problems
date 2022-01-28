#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (k < n)
        {
            if (n % k)
                cout << 2 << endl;
            else
                cout << 1 << endl;
        }
        else
            cout << (k / n) + ((k % n) ? (1) : (0)) << endl;
    }
}
