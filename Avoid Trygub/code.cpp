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
        int b = count (str.begin(), str.end(), 'b'); 
        for (int i = 0; i< b; i++)
        {
            cout << 'b'; 
        }
        for (int i = 0;i< size; i++)
        {
            if (str[i] == 'b') continue; 
            cout << str[i]; 
        }
        cout << endl; 
    }
}
