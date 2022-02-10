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
        vector<int> v(n); 
        for (auto &i : v) cin >> i; 
        sort(v.begin(), v.end()); 
        int count = 0; 
        for (int i = 1; i< v.size(); i++)
        {
            if (v[i] >= k) break; 
            count += (k - v[i]) / v[0]; 
        }
        cout << count << endl; 
    }
}
