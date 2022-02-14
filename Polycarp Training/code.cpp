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
    vector<int> v(size);
    for (auto &i : v)
        cin >> i;
    sort(v.begin(), v.end());
    int j = 1, count = 0;
    for (int i = 0; i < size; i++)
    {
        if (v[i] >= j)
        {
            count++;
            j++;
        }
    }
    cout << count << endl; 
}
