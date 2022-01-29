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
        vector<char> v(size); 
        bool found = false; 
        int l = -1 , r = -1; 
        for (int i = 0;i< v.size(); i++)
        {
            cin >> v[i]; 
            if (i >0 && v[i] != v[i-1] && !found)
            {
                l = i;
                r = i+1; 
                found = true; 
            }
        }
        cout << l << " " << r << endl;
        v.clear(); 
    }
}
