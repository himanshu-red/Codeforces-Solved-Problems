/*-----------------------------------------HIMANSHU RANJAN---------------------------------------*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
#define endl '\n'
#define deb(x) cerr << (#x) << " is " << (x) << endl;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        set<char> s;
        int count = 1;
        for (int i = 1; i < str.size(); i++)
        {
            if (str[i] == str[i - 1])
                count++;
            else
            {
                if (count % 2)
                    s.insert(str[i - 1]);
                count = 1;
            }
        }
        if (count % 2)
            s.insert(str[str.size() - 1]);
        for (auto &i : s)
            cout << i;
        cout << endl;
    }
}
