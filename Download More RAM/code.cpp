#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n, k;
    while (t--)
    {
        cin >> n >> k;
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i].first;
        for (int i = 0; i < n; i++)
            cin >> v[i].second;
        sort(v.begin(), v.end());
        for (int i = 0;i< n; i++)
        {
            if (k >= v[i].first)
            {
                k += v[i].second;
            }
            else break; 
        }
        v.clear(); 
        cout << k << endl; 
    }
}
