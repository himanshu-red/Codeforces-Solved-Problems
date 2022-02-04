#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size, sum = 0;
        cin >> size;
        vector<int> v(size), o(size, 0);
        for (auto &i : v)
            cin >> i;
        for (int i = size - 1; i >= 0; i--)
        {
            if (v[i] > sum)
            {
                sum += (v[i] - sum);
            }
            if (sum)
            {
                o[i] = 1;
                sum--;
            }
        }
        for (auto &i : o)
            cout << i << " ";
        cout << endl;
    }
}
