/*-----------------------------------------HIMANSHU RANJAN---------------------------------------*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
#define endl '\n'
#define watch(x) cerr << (#x) << " is " << (x) << endl;
int checkMex(char ch1, char ch2)
{
    int a = ch1 - 48;
    int b = ch2 - 48;
    return (a + b == 2) ? (0) : (a + b + 1);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        string a, b;
        cin >> a >> b;
        int total = 0;
        for (int i = 0; i < size; i++)
        {
            int mex = checkMex(a[i], b[i]);
            total += mex;
            if (i + 1 < size && mex < 2)
            {
                int mex2 = checkMex(a[i + 1], b[i + 1]);
                if ((mex == 1 && mex2 == 0) || (mex == 0 && (mex2 == 1 || mex2 == 2)))
                {
                    total += mex == 1 ? 1 : 2;
                    i++;
                }
            }
        }
        cout << total << endl;
    }
}
