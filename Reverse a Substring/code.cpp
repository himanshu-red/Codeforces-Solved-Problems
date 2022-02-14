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
    int size;
    cin >> size;
    string str;
    cin >> str;

    vector<int> index(27, 0);
    bool found = false;

    for (int i = 0; i < size; i++)
        index[str[i] - 'a' + 1] = i;

    for (int i = 0; i < size; i++)
    {
        int val = str[i] - 'a' + 1;
        int j = 1;

        while (j < val)
        {
            if (index[j] > i)
            {
                cout << "YES" << endl;
                cout << i+1 << " " << index[j]+1 << endl;
                found = true;
                break;
            }
            j++;
        }

        if (found)
            break;
    }

    if (!found)
        cout << "NO" << endl;
}
