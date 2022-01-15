#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, l;
    cin >> n >> m;
    vector<int> v(n);
    map<int, int> mp;
    vector<int> frequency(n);
    for (auto &i : v)
        cin >> i;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        mp[v[i]]++;
        if (i == v.size() - 1)
            frequency[i] = 1;
        else if (mp[v[i]] > 1)
            frequency[i] = frequency[i + 1];
        else
            frequency[i] = frequency[i + 1] + 1;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> l;
        cout << frequency[l - 1] << endl;
    }
}
