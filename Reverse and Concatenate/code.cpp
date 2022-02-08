#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
#define endl '\n'
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        int l = 0, r = n - 1;
        while (l < r)
        {
            if (str[l] != str[r])
                break;
            l++;
            r--;
        }
        if (l == r || l > r)
            cout << 1 << endl;
        else if (k >= 1)
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }
}
