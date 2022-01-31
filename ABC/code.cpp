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
        string str;
        cin >> str;
        if (str.size() >= 3)
            cout << "NO" << endl;
        else if (str.size() == 1)
            cout << "YES" << endl;
        else if (str.size() == 2)
        {
            if (str[0] != str[1])
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}
