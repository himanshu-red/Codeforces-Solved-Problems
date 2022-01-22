#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    vector<int> v1(m);
    vector<int> v2(n);
    for (auto &i : v1)
        cin >> i;
    for (auto &i : v2)
        cin >> i;
    int i = 0, j = 0;
    while (i < v1.size() || j < v2.size())
    {
        if (i == v1.size() || (j < v2.size() && v2[j] < v1[i]))
            cout << v2[j++] << " ";
        else
            cout << v1[i++] << " ";
    }
}
