#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if ((n % 2) && (i > ((n - 3) / 2) - 1) && (i <= n - ((n - 3) / 2) - 1) && (j > ((n - 3) / 2) - 1) && ((j <= n - ((n - 3) / 2) - 1)))  // got a little nasty here
                {
                    cout << 1 << " ";
                }
                else if (i == j || i == n - j - 1)
                    cout << 1 << " ";
                else
                    cout << 0 << " ";
            }
            cout << endl;
        }
    }
}
