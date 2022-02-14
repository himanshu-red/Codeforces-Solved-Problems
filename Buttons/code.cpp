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
    int n;
    cin >> n;
    int locked = n - 1;
    int unlocked = 1;
    int moves = 0;
    while (n)
    {
        moves += (locked * unlocked) + 1;
        locked--;
        unlocked++;
        n--;
    }
    cout << moves << endl;
}
