#include <bits/stdc++.h>
using namespace std; 
int main()
{
    int n, k; 
    cin >> n >> k; 
    vector<int> corners(n); 
    for (auto &i : corners) cin >> i; 
    if (n < k) 
        cout << -1 << endl; 
    else 
    {
        sort(begin(corners), end(corners), greater<int>());
        cout << corners[k-1] << " " << corners[k-1] << endl; 
    }
}
