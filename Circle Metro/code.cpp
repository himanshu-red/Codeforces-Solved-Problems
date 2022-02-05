#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, x, b, y;
    cin >> n >> a >> x >> b >> y; 
    bool met = false; 
    while (a != x && b != y)
    {
        a++;
        b--;
        if (a > n)
            a = 1;
        if (b < 1)
            b = n;
        if (a == b) 
        {
            met = true; 
            break; 
        }
    }
    cout << ((met) ? ("YES") : ("NO")) << endl; 
}
