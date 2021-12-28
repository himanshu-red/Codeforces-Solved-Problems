#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    int n, m, rb, cb, rd, cd; 
    cin >> t; 
    while (t--)
    {
        cin >> n >> m >> rb >> cb >> rd >> cd; 
        int r = 1, c = 1; 
        int count = 0; 
        while (rb != rd && cb != cd)
        {
            if (rb == n)
            {
                r = -1; 
            }
            else if (rb == 1)
            {
                r = 1; 
            }
            if (cb == m)
            {
                c = -1; 
            }
            else if (cb == 1)
            {
                c = 1;
            }
            rb += r; 
            cb += c; 
            count++; 
        }
        cout << count << endl; 
    }
}
