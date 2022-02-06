#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    sort(v.begin(), v.end(), greater<int>());
    int i = 0, j = n - 1;
    int hSum = 0, vSum = 0;
    while (i < j)
    {
        hSum += v[i];
        vSum += v[j];
        i++;
        j--;
    }
    if (n % 2)
        hSum += v[i];
    cout << 1ll * hSum * hSum + 1ll * vSum * vSum << endl;
}
