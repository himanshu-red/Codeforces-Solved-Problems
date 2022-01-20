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
        cin >> col;
        cin >> s1;
        cin >> s2;
        trap = false;
        if (s2[col - 1] == '1' || s1[0] == '1')
            trap = true;
        if (!(trap))
        {
            for (int i = 0; i < col; i++)
            {
                if (s1[i] == '1' && s2[i] == '1')
                {
                    trap = true;
                }
            }
        }
        if (trap)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}
