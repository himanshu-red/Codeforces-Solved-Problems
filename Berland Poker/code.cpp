#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int winner = (m > n / k) ? (n / k) : (m);
        m -= winner;
        k--; 
        int runner = m / k + ((m % k != 0) ? (1) : (0));
        cout << winner - runner << endl; 
    }
}
