#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin >> t; 
    while (t--)
    {
        int size; 
        cin >> size; 
        vector<int> v(size*2); 
        for (auto &i : v) cin  >> i; 
        sort(v.begin(), v.end()); 
        cout << abs(v[size-1] - v[size]) << endl; 
    }
}
