#include <bits/stdc++.h>
using namespace std; 
int main()
{
    int t, total; 
    cin >> t; 
    while (t--)
    {
        cin >> total; 
        map<char, int> m; 
        bool possible = true; 
        string str; 
        for (int i = 0; i< total; i++)
        {
            cin >> str; 
            for (int i= 0; i< str.size(); i++)
                m[str[i]]++; 
        }
        for (auto &i : m)
        {
            if (i.second % total != 0)
            {
                possible = false;
                break;
            }
        }
        cout << ((possible) ? ("YES") : ("NO")) << endl; 
    }
}
