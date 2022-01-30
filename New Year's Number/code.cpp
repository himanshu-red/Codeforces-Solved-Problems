#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        int rem = num % 2020;
        int quo = num / 2020;
        if (quo >= rem)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
