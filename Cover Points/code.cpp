#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long; 
int main()
{
    int n, a, b; 
    cin >> n; 
    ll maxSum = 0; 
    for (int i = 0;i < n; i++)
    {
        cin >> a >> b; 
        if (maxSum < a+b) maxSum = a+b; 
    }
    cout << maxSum << endl; 

}
