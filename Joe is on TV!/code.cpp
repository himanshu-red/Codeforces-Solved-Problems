#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    double sum = 0;
    for (int i = num; i > 0; i--)
        sum += 1 / (double)i;
    cout << fixed << setprecision(12) << sum << endl;
}
