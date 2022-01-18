#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, d;
    int operations = 0;
    bool possible = true;
    cin >> n >> m >> d;
    vector<int> v(n * m);
    for (auto &i : v)
    {
        cin >> i;
    }
    sort(v.begin(), v.end());
    int mid = v[v.size() / 2];
    for (auto i : v)
    {
        if (i < mid)
        {
            if ((mid - i) % d == 0)
                operations += ((mid - i) / d);
            else
            {
                possible = false;
                break;
            }
        }
        else if (i > mid)
        {
            if ((i - mid) % d == 0)
                 operations += ((i - mid) / d);
            else
            {
                possible = false;
                break;
            }
        }
    }
    if (possible)
        cout << operations << endl;
    else
        cout << -1 << endl;
}
