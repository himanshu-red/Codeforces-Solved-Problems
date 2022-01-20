#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, col;
    bool trap;
    string s1;
    string s2;
    cin >> t;
    while (t--)
    {
        vector<int> v(3);
        for (auto &i : v)
            cin >> i;
        sort(v.begin(), v.end());
        if (v[0] == v[1] && v[2] % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else if (v[1] == v[2] && v[0] % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else if (v[2] == v[1] + v[0])
        {
            cout << "YES" << endl; 
        }
        else 
        {
            cout << "NO" << endl; 
        }
    }
}
