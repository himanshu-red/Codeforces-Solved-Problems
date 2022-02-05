#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l;
    cin >> l;
    vector<bool> v(l + 1, false);
    int p, q, level;
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        cin >> level;
        v[level] = true;
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> level;
        v[level] = true;
    }
    if (count(v.begin(), v.end(), 0) > 1)
        cout << "Oh, my keyboard!" << endl;
    else
        cout << "I become the guy." << endl;
}
