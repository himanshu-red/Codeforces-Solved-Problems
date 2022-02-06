#include <bits/stdc++.h>
using namespace std; 
int main()
{
    int t; 
    cin >> t; 
    vector<pair<int, int>> v(t); 
    for (int i= 0; i< v.size(); i++)
    {
        cin >> v[i].first; 
        v[i].second = i+1; 
    }
    sort(v.begin(), v.end(), greater<pair<int, int>>()); 
    int sum = 0; 
    for (int i = 0; i< t; i++)
        sum += v[i].first*i+1; 
    cout << sum << endl; 
    for (auto i : v) 
        cout << i.second << " " ; 
    cout << endl; 
}
