#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    cout << ((2 * n > k) ? (0) : (((k - (2*n)) > n) ? (0) : (n- (k - (2*n))))) << endl;
}
