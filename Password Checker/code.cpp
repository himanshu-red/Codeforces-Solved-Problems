#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s; 
    cin >> s; 
    if (s.size() >= 5)
    {
        bool lowercase = false;
        bool uppercase = false;
        bool hasDigit = false;
        for (int i = 0; i< s.size(); i++)
        {
            if (isdigit(s[i])) hasDigit = true; 
            if (isalpha(s[i]) && (s[i] >= 'a' && s[i] <= 'z')) lowercase = true; 
            if (isalpha(s[i]) && (s[i] >= 'A' && s[i] <= 'Z')) uppercase = true; 
        }
        if (lowercase && uppercase && hasDigit)
            cout << "Correct" << endl; 
        else 
            cout << "Too weak" << endl; 
    }
    else
        cout << "Too weak" << endl; 
    
    
}
