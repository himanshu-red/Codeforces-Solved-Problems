/*-----------------------------------------HIMANSHU RANJAN---------------------------------------*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
#define endl '\n'
#define deb(x) cerr << (#x) << " is " << (x) << endl;
int calc(int a, int b_, int b)
{
    int ops = b - b_;
    while (a > 0)
    {
        a /= b;
        ops++;
    }
    return ops;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        vector<int> v; 
        for (int i = 0; i<= 10; i++)
        {
            if (b + i ==  1) continue; 
            v.push_back(calc(a, b, b+i)); 
        }
        sort(v.begin(), v.end()); 
        cout << v[0] << endl; 
    }
}
