#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r, k;
        cin >> l >> r >> k;
        int totalNo = r - l + 1;
        int totalEven = (l % 2 == 0 && r % 2 == 0) ? (totalNo / 2 + 1) : (totalNo / 2);
        int totalOdd = totalNo - totalEven;
        if ((l == r && l != 1) || totalOdd <= k )
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
}
