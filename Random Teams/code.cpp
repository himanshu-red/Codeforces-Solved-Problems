#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull getMax(ull n, ull m)
{
    ull bigTeam = n - (m - 1);
    ull totalPair = bigTeam * (bigTeam - 1) / 2;
    return totalPair;
}
ull getMin(ull n, ull m)
{
    if (m == 1)
        return (getMax(n, m)); 
    ull equalDiv = n / m;
    ull rem = n % m;
    ull totalPair = (rem * ((equalDiv + 1) * equalDiv / 2)) + ((m - rem) * (equalDiv * (equalDiv - 1) / 2));
    return totalPair; 
}
int main()
{
    ull n, m;
    // n -> total participants
    // m -> total teams
    cin >> n >> m;
    cout << getMin(n, m) << " " << getMax(n, m) << endl;
}
