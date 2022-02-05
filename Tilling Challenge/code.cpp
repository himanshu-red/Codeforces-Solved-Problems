#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<string> v(t);
    char dot = '.';
    char hash = '#';
    bool filled = true;
    for (int i = 0; i < t; i++)
    {
        cin >> v[i]; 
    }
    for (int i = 1; i < t - 1; i++)
    {
        for (int j = 1; j < t - 1; j++)
        {
            if (v[i][j] == dot && v[i][j + 1] == dot && v[i][j - 1] == dot && v[i + 1][j] == dot && v[i - 1][j] == dot)
            {
                v[i][j] = hash;
                v[i][j + 1] = hash;
                v[i][j - 1] = hash;
                v[i + 1][j] = hash;
                v[i - 1][j] = hash;
            }
        }
    }
    for (int i = 0; i < t; i++)
    {
        if (count(v[i].begin(), v[i].end(), dot))
        {
            filled = false;
            break;
        }
    }
    if (filled)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
