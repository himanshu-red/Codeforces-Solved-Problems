#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
#define endl '\n'
int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        ull total = i * ((i + 1) / (double)2);
        if (total - (n - i) == k)
        {
            cout << n - i << endl;
            break;
        }
    }
}
