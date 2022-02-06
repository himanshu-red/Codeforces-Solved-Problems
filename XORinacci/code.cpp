#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        int c = a ^ b;
        n %= 3;
        switch (n)
        {
        case 0:
            cout << a << endl;
            break;
        case 1:
            cout << b << endl;
            break;
        case 2:
            cout << c << endl;
        }
    }
}
