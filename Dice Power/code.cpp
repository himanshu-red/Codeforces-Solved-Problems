#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
#define endl '\n'
int main()
{
    int size;
    cin >> size;
    vector<ull> v(size);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
        int rem = v[i] % 14;
        cout << (v[i] > 14 && rem >= 1 && rem <= 6 ? "YES" : "NO") << endl;
    }
}
