#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, a, b;
    cin >> n >> m >> a >> b;
    int a_ = n * a;
    int b_ = (n / m) * b + b; 
    int c_ = (n / m) * b + (n % m) * a;
    int d_ = (m >= n) ? ((n * a < b) ? (n * a) : (b)) : (INT_MAX);
    cout << min(a_, min(b_, min(c_, d_)));
}
