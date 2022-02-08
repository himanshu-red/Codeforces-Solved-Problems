#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, names;
    cin >> n >> m;
    int tf = 0, nop = 0; // nop -> names on a page, tf -> total flips
    for (int i = 0; i < n; i++)
    {
        cin >> names;
        tf = names / m;
        names = (names >= m) ? (names - m * (names / m)) : (names); 
        nop = (nop + names >= m) ? (++tf, nop + names - m) : (nop + names);
        cout << tf << endl; 
    }
}
