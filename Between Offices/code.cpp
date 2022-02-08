#include <bits/stdc++.h>
using namespace std; 
int main()
{
    int size; 
    cin >> size; 
    int sf = 0, fs = 0; 
    string str; 
    cin >> str; 
    for (int i=1; i< size; i++)
    {
        (str[i] == 'F' && str[i - 1] == 'S') ? (sf++) : ((str[i] == 'S' && str[i - 1] == 'F') ? (fs++) : (0));
    }
    cout << ((sf > fs) ? ("YES") : ("NO")) << endl; 
}
