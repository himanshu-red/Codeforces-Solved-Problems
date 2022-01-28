#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, count = 0;
    cin >> n >> a >> b;
    for (int i = a + 1; i <= n; i++)
    {
        if (i >= n-b)
            count++;
    }
    cout << count << endl;
}
