#include <bits/stdc++.h>
using namespace std; 
using ll = unsigned long long; 
int main()
{
    int t; 
    cin >> t; 
    while (t--)
    {
        ll num; 
        cin >> num; 
        while (num > 1 && num % 2 == 0)
        {
            num/=2; 
        }
        if (num != 1)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl; 
    }
}
