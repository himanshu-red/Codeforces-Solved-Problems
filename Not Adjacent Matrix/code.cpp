/*-----------------------------------------HIMANSHU RANJAN---------------------------------------*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
#define endl '\n'
#define watch(x) cerr << (#x) << " is " << (x) << endl;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        int odd = 1, even = 2;
        if (num == 2)
            cout << -1 << endl;
        else
        {
            for (int i = 1; i <= num; i++)
            {
                for (int j = 1; j <= num; j++)
                {
                    if (odd <= num*num)
                    {
                        cout << odd << " ";
                        odd += 2;
                    }
                    else
                    {
                        cout << even << " ";
                        even += 2;
                    }
                }
                cout << endl;
            }
        }
    }
}
