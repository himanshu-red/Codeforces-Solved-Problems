#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b; 
    if (a == 9 && b == 1)
        cout << 99 << " " << 100 << endl;
    else if (b - a == 1)
        cout << a << 9 << " " << b << 0 << endl;
    else if (b == a)
        cout << a << 1 << " " << b << 2 << endl;
    else
        cout << -1 << endl;
}
