#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string str;
    bool isSq; 
    cin >> t;
    while (t--)
    {
        cin >> str;
        isSq = true;
        if (str.size() % 2)
            isSq = false;
        else
        {
            int i = 0;
            int j = (str.size() / 2);
            while (j < str.size() && str[i] == str[j])
            {
                i++; 
                j++; 
            }
            if (j != str.size())
                isSq = false;
        }
        if (isSq)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
