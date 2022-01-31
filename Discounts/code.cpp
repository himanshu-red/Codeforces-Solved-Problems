#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
int main()
{
    int n, m, temp;
    cin >> n;
    ll sum = 0;
    vector<int> chocolates(n);
    for (auto &i : chocolates)
    {
        cin >> i;
        sum += i; 
    }
    sort(chocolates.begin(), chocolates.end()); 
    cin >> m;
    for (int i = 0;i< m; i++)
    {
        cin >> temp; 
        cout << sum - chocolates[n - temp] << endl; 
    }
}
