#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        vector<int> v(size);
        for (auto &i : v)
            cin >> i;
        sort(v.begin(), v.end());
        int count = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] <= i + 1)
                count = i + 1;
        }
        cout << count + 1 << endl;
    }
}
