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
        vector<int> v(size); 
        for (auto &i : v) cin >> i; 
        sort(begin(v), end(v)); 
        for (int i = 0; i< v.size()-1; i++)
        {
            v[size-1] &= v[i]; 
        }
        cout << v[size-1] << endl; 
    }
}
