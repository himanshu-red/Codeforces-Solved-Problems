#include <bits/stdc++.h>
using namespace std;
using ull = long long;
int main()
{
    int t;
    ull start, jumps;
    cin >> t;
    while (t--)
    {
        cin >> start >> jumps;
        int rem = jumps % 4;
        ull ans;
        if (start % 2 == 0)
        {
            if (rem == 0)
                ans = start;
            else if (rem == 1)
                ans = (start - jumps);
            else if (rem == 2)
                ans = (start + 1);
            else
                ans =  start + (4 * ((jumps+1)/4)); 
        }
        else
        {
            if (rem == 0)
                ans = start;
            else if (rem == 1)
                ans = (start + jumps);
            else if (rem == 2)
                ans = start - 1;
            else
                ans = start - jumps - 1;
        }
        cout << ans << endl;
    }
}
