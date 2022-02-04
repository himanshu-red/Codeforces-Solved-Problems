#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    sort(v.begin(), v.end());
    int smallest = v[0];
    int sum = 0;
    int count = 0;
    int j = 0;
    while (count < k)
    {
        if (j == v.size())
        {
            cout << 0 << endl;
            count++;
        }
        else
        {
            if (v[j] != 0)
            {
                smallest = v[j];
                v[j] -= smallest;
                sum += smallest;
                cout << smallest << endl;
                count++;
            }
            else
            {
                while (j < n && v[j++]- sum == 0);
                if (j < n) v[j] -= sum; 
            }
        }
    }
}
