#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n % 7 == 0)
        {
            cout << n << endl;
        }
        else
        {
            int prevTen = n - (n % 10);
            int nextTen = prevTen + 10;
            int next = 7 * ((n / 7) + 1);
            int prev = next - 7; 
            if (next < nextTen && next > prevTen)
                cout << next << endl; 
            else 
                cout << prev << endl; 
        }
    }
}
