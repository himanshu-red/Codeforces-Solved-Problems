
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, a, b;
    cin >> n >> x; 
    int left = 0, right = 1000;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a > b)
        {
            a = a + b;
            b = a - b;
            a = a - b;
        }
        if (a > left)
            left = a;
        if (b < right)
            right = b;
    }
    if (left > right)
        cout << -1 << endl; 
    else 
    {
        if (x >= left && x <= right) cout << 0 << endl; 
        else if (x < left && x < right) cout << left-x << endl; 
        else cout << x - right << endl;  
    }
}
