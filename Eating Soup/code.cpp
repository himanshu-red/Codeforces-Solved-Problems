#include <bits/stdc++.h>
using namespace std; 
int main()
{
    int n, m ; 
    cin >> n >> m; 
    cout << ((m == 0) ? (1) : ((m<= n/2) ? (m) : (n-m))) << endl; 
}
