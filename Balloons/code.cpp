/*-----------------------------------------HIMANSHU RANJAN---------------------------------------*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
#define endl '\n'
#define deb(x) cerr << (#x) << " is " << (x) << endl;
int main()
{
    int size;
    cin >> size;
    vector<int> v(size);
    for (auto &i : v)
        cin >> i;
    if (size == 1)
        cout << -1 << endl;
    else if (size == 2 && v[0] == v[1])
        cout << -1 << endl;
    else
    {
        int min = 1000, ind = 0;
        cout << 1 << endl;
        for (int i = 0; i < v.size(); i++)
        {
            if (min > v[i])
            {
                min = v[i];
                ind = i;
            }
        }
        cout << ind + 1 << endl;
    }
}
