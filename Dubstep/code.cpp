#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 0, flag =0;
    string s;
    cin >> s;
    while (i < s.size())
    {
        //cout << i << " ";
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i += 3;
        }
        else
        {
            if (s[i - 1] == 'B' && s[i - 2] == 'U' && s[i - 3] == 'W' && flag == 1)
                cout << " ";
            cout << s[i];
            flag = 1;
            i++;
        }
    }
}
