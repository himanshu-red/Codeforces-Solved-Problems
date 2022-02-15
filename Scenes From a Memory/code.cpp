/*-----------------------------------------HIMANSHU RANJAN---------------------------------------*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
#define endl '\n'
#define watch(x) cerr << (#x) << " is " << (x) << endl;
bool check(vector<int> &v, int a, int b)
{
    return (v[a] != -1 && v[b] != -1 && v[a] < v[b]);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        string str;
        cin >> str;
        bool done = false;
        vector<int> hash(10, 0);
        vector<int> v(10, -1);
        for (int i = 0; i < size; i++)
        {
            if (str[i] == '1' || str[i] == '4' || str[i] == '6' || str[i] == '8' || str[i] == '9')
            {
                cout << 1 << endl
                     << str[i] << endl;
                done = true;
                break;
            }
            else
            {
                v[str[i] - '1' + 1] = i;
                hash[str[i] - '1' + 1]++;
            }
        }
        if (!done)
        {
            for (int i = 2; i < 10; i++)
            {
                if (hash[i] > 1)
                {
                    cout << 2 << endl
                         << i << i << endl;
                    done = true;
                    break;
                }
            }
        }
        if (!done)
        {
            cout << 2 << endl;
            if (check(v, 2, 7))
                cout << 27 << endl;
            else if (check(v, 2, 5))
                cout << 25 << endl;
            else if (check(v, 3, 5))
                cout << 35 << endl;
            else if (check(v, 7, 5))
                cout << 75 << endl;
            else if (check(v, 3, 2))
                cout << 32 << endl;
            else if (check(v, 5, 2))
                cout << 52 << endl;
            else if (check(v, 7, 2))
                cout << 72 << endl;
            else if (check(v, 5,7))
                cout << 57 << endl; 
        }
    }
}
