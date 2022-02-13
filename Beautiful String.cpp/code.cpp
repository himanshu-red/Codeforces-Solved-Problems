#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
#define endl '\n'
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        bool possible = true;
        char b = 'b', a = 'a', c = 'c';
        if (str.size() == 1)
            str[0] = a;
        else
        {
            if (str[0] == '?' && str[1] != '?')
            {
                str[0] = (a != str[1] ? a : b);
            }
            else if (str[0] == '?' && str[1] == '?')
            {
                str[0] = a;
            }
            for (int i = 1; i < str.size() - 1; i++)
            {
                if (str[i] == '?' && str[i + 1] != '?')
                {
                    str[i] = (a != str[i - 1] && a != str[i + 1]) ? (a) : ((b != str[i - 1] && b != str[i + 1]) ? (b) : (c));
                }
                else if (str[i] == '?' && str[i + 1] == '?')
                {
                    str[i] = (a != str[i - 1] ? a : b);
                }
                else if (str[i] == str[i - 1])
                {
                    possible = false;
                    break;
                }
            }
            if (str.size() > 1 && str[str.size() - 1] == str[str.size() - 2])
            {
                possible = false;
            }
            if (possible && str[str.size() - 1] == '?')
            {
                str[str.size() - 1] = (a != str[str.size() - 2] ? a : b);
            }
        }
        if (possible)
            cout << str << endl;
        else
            cout << -1 << endl;
    }
}
