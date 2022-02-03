#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<string> s(t);
    for (auto &i : s)
        cin >> i;
    char d = s[0][0];
    char nd = s[0][1];
    bool correct = true;
    if (d == nd)
        correct = false;
    else
    {
        for (int i = 0; i < t; i++)
        {
            for (int j = 0; j < t; j++)
            {
                if ((i == j || i == t - j - 1) && s[i][j] != d)
                {
                    correct = false;
                    break;
                }
                else if (!(i == j || i == t - j - 1) && s[i][j] != nd)
                {
                    correct = false;
                    break;
                }
            }
            if (!correct)
                break;
        }
    }
    if (correct)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
