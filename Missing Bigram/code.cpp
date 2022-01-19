#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int length;
    cin >> t;
    while (t--)
    {
        cin >> length;
        vector<string> str(length - 2);
        for (auto &i : str)
        {
            cin >> i;
        }
        bool found = false;
        cout << str[0][0];
        for (int i = 1; i < str.size(); i++)
        {
            if (str[i][0] != str[i - 1][1])
            {
                found = true;
                cout << str[i - 1][1];
            }
            cout << str[i][0];
        }
        cout << str[str.size() - 1][1];
        if (found)
            cout << endl;
        else
            cout << "b" << endl;
    }
}
