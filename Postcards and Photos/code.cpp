#include <bits/stdc++.h>
using namespace std; 
int main()
{
    string str; 
    int moves =0, i =0; 
    cin >> str; 
    while (i < str.size())
    {
        int j = i;
        char ch = str[i]; 
        while (j < str.size() && j - i < 5 && str[j] == ch) j++; 
        moves++; 
        i = j; 
    }
    cout << moves << endl; 
}
