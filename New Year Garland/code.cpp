#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v(3);
        for (auto &i : v)
            cin >> i;
        sort(v.begin(), v.end());
        if (v[0] + v[1] + 1 < v[2])
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}
