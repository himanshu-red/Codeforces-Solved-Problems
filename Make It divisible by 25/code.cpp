#include <bits/stdc++.h>
using namespace std; 
int main()
{
    int t; 
    string s;
    cin >> t; 
    while (t--)
    {
        cin >> s; 
        int l = s.size()-1; 
        int r; 
        vector<int> res; 
        while (l >= 0)
        {
            if (s[l] == '0')
            {
                r = l-1; 
                while ((r != 0) && (s[r] != '0' && s[r] != '5'))r--;
                if (s[r] == '5' || s[r] == '0')
                {
                    res.push_back((s.size()-l-1) + (l -r - 1)); 
                }
            }
            else if (s[l] == '5')
            {
                r = l-1; 
                while ((r != 0) && (s[r] != '2' && s[r] != '7')) r--; 
                if (s[r] == '2' || s[r] == '7')
                {
                    res.push_back((s.size()-l-1) + (l - r - 1)); 
                }
            }
            l--; 
        }
        if (res.size() != 0)
        {
            sort(res.begin(), res.end()); 
            cout << res[0] << endl; 
            res.clear(); 
        }
    }
}
