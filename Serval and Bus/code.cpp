/*-----------------------------------------HIMANSHU RANJAN---------------------------------------*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
#define endl '\n'

int main()
{
    int n, t;
    cin >> n >> t;
    int ans = -1;
    int a, b;
    int index, close = INT_MAX;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a < t)
        {
            int n = (t - a + b) / b;
            v[i] = ((a + (n-1)  * b) < t) ? (a + n * b) : (a + (n-1) * b);
        }
        else
            v[i] = a;
        if (close > v[i] - t)
        {
            close = v[i] - t;
            index = i;
        }
    }
    cout << index + 1 << endl;
}
