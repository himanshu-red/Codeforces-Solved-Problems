#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, a;
    cin >> n >> m >> a;
    int row = n / a;
    if (n % a != 0)
        row++;
    int col = m / a;
    if (m % a != 0)
        col++;
    cout << 1ull *  row * col << endl;
}
