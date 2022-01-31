#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s;
        cin >> s;
        vector<ll> v(s);
        bool possible = true;
        ll sum = 0;
        for (int i = 0; i < s; i++)
        {
            cin >> v[i];
            v[i] += sum;
            if (possible && i > 0 && v[i] < i)
            {
                possible = false;
            }
            sum = v[i] - i;
            v[i] = i;
        }
        if (possible)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
