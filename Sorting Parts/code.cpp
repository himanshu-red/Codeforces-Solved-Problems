#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
#define endl '\n'
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size; 
        cin >> size; 
        vector <int> v(size), temp; 
        for (auto &i : v) cin >> i; 
        temp = v; 
        sort(temp.begin(), temp.end()); 
        cout << ((temp == v) ? ("NO") : ("YES"))  << endl; 
    }
}
