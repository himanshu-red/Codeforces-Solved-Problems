#include <bits/stdc++.h>
using namespace std;
int convertStr(char ch)
{
    stringstream ss;
    int d;
    ss << ch;
    ss >> d;
    return d;
}
int convertStr(char ch1, char ch2)
{
    string str;
    str.push_back(ch1);
    str.push_back(ch2);
    stringstream ss;
    int digit;
    ss << str;
    ss >> digit;
    return digit;
}
int main()
{
    int t;
    string s1, s2;
    int s1Size;
    int s2Size;
    bool impossible;
    vector<int> v;
    cin >> t;
    while (t--)
    {
        cin >> s2 >> s1;
        impossible = false;
        while (s1.size() > 0 && s2.size() > 0)
        {
            s1Size = s1.size() - 1;
            s2Size = s2.size() - 1;
            if (s1[s1Size] >= s2[s2Size])
            {
                v.push_back(convertStr(s1[s1Size]) - convertStr(s2[s2Size]));
                s1.pop_back();
                s2.pop_back();
            }
            else
            {
                if (s1.size() <= s2.size())
                {
                    impossible = true;
                    break;
                }
                else if (convertStr(s1[s1Size - 1]) != 1)
                {
                    impossible = true;
                    break;
                }
                else
                {
                    v.push_back(convertStr(s1[s1Size - 1], s1[s1Size]) - convertStr(s2[s2Size]));
                    s1.pop_back();
                    s1.pop_back();
                    s2.pop_back();
                }
            }
        }
        while (!(impossible) && s1.size())
        {
            v.push_back(convertStr(s1[s1.size()-1])); 
            s1.pop_back(); 
        }
        if (impossible)
            cout << -1 << endl;
        else
        {
            int i  = v.size()-1; 
            while(v[i] == 0) i--; 
            for ( i ; i >= 0; i--)
            {
                cout << v[i];
            }
            cout << endl;
        }
        v.clear();
    }
}
