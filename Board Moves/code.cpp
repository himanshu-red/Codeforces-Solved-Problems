#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
int main()
{
    vector<ll> v(500000, 0);
    int num = 1;
    for (int i = 3; i <= 500000; i += 2)
    {
        ll cells = 2 * i + 2 * (i - 2);
        v[i] = (cells * num) + v[i - 2];
        num++; 
    }
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        cout << v[size] << endl;
    }
}
