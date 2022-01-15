#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long n;
    unsigned long long maxDiff;
    unsigned long long minFreq;
    unsigned long long maxFreq;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    sort(begin(v), end(v));
    maxDiff = v[v.size() - 1] - v[0];

    if (v[0] != v[v.size() - 1])
    {
        minFreq = upper_bound(begin(v), end(v), v[0]) - begin(v);
        maxFreq = end(v) - lower_bound(begin(v), end(v), v[v.size() - 1]);
        cout << maxDiff << " " << maxFreq * minFreq << endl;
    }
    else
    {
       unsigned long long maxPair = n * (n-1) / 2; 
       cout << maxDiff << " " << maxPair << endl; 
    }
}
