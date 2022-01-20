#include <bits/stdc++.h>
using namespace std; 
int main()
{
    int t;
    int a, b, c;
    cin>> t; 
    while (t--)
    {
        cin >> a >> b >> c; 
        if ((a+c - (2*b)) % 3 != 0)
            cout << 1 << endl; 
        else 
            cout << 0 << endl; 
    }
}
