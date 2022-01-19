#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num; 
        int a = num-4; 
        int b = 3; 
        while (__gcd(a,b) != 1 && a+b+1 == num) 
        {
            a--; b++; 
        }
        cout << a << " " << b << " " << 1 << endl; 
    }
}
