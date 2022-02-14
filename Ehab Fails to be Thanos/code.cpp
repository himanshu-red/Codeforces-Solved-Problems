/*-----------------------------------------HIMANSHU RANJAN---------------------------------------*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
#define endl '\n'
#define watch(x) cerr << (#x) << " is " << (x) << endl;
int main()
{
    int size;
    cin >> size;
    vector<int> v(size * 2);
    for (auto &i : v)
        cin >> i;
    sort(v.begin(), v.end());
    if (v[0] == v[size * 2 - 1])
        cout << -1 << endl;
    else
        for (auto &i : v)
            cout << i << " ";
}
