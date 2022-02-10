#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, size;
    cin >> t;
    while (t--)
    {
        cin >> size;
        vector<int> v(size);
        for (auto &i : v)
            cin >> i;
        sort(v.begin(), v.end());
        int j = size - 1;
        for (int i = 0; i < size / 2; i++)
        {
            cout << v[j--] << " " << v[0] << endl;
        }
    }
}
