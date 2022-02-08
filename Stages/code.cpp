#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, total = 0;
    cin >> n >> k;
    string str;
    cin >> str;
    sort(str.begin(), str.end());
    int i = 1;
    char ch = str[0]; 
    total = str[0] - 96;
    while (k > 1 && i < n)
    {
        if (str[i] - ch < 2)
        {
            i++;
            continue;
        }
        else
        {
            total += str[i] - 96;
            ch = str[i]; 
            i++; 
            k--;
        }
    }
    cout << ((k == 1) ? (total) : (-1)) << endl;
}
