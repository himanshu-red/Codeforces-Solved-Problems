#include <bits/stdc++.h>
using namespace std; 
int main()
{
    int n, m; 
    cin >> n >> m; 
    vector<int> v(n); 
    for (auto &i : v) cin >> i;
    sort(v.begin(), v.end(), greater<int>()); 
    int i = 0; 
    for (i ; i <n; i++)
    {
        m-= v[i];
        if (m <= 0)
            break;
    }
    cout << i+1 << endl; 
}
