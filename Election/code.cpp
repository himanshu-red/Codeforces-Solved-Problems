#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void print(int a, ll max, int freq)
{
    if (freq == 2 && max == a)
        cout << 1 << " ";
    else if (freq == 1 && max == a)
        cout << 0 << " ";
    else
        cout << max - a + 1 << " ";
}
int main()
{
    int t;
    cin >> t;
    vector<int> v(3);
    map<int, int> m;
    while (t--)
    {
        for (auto &i : v)
        {
            cin >> i;
            m[i]++;
        }
        int maxVal = max(v[0], max(v[1], v[2]));
        print(v[0], maxVal, m[v[0]]);
        print(v[1], maxVal, m[v[1]]);
        print(v[2], maxVal, m[v[2]]);
        m.clear(); 
        cout << endl;
    }
}
