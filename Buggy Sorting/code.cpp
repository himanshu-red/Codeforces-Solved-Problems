#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    if (t <= 2)
        cout << -1 << endl;
    else
        for (int i = t; i >= 1; i--)
            cout << i << " ";
}
