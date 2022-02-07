#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n;
    cin >> t;
    while (t--)
    {
        cin >> n ;
        bool possible = true;
        vector<int> a(n), b(n);
        for (auto &i : a)
            cin >> i;
        for (auto &i : b)
            cin >> i;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for (int i = 0; i < n; i++)
        {
            if (b[i] - a[i] > 1 || b[i] - a[i] < 0) 
            {
                possible = false;
                break;
            }
        }
        cout << ((possible) ? ("YES") : ("NO")) << endl;
    }
}
