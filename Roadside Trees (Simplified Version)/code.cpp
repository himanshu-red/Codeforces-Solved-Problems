#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int time = v[0] + 1;
    for (int i = 1; i < n; i++)
    {
        // cout << time << endl;
        if (v[i - 1] == v[i])
            time += 2;
        else if (v[i - 1] < v[i])
            time += v[i] - v[i - 1] + 2;
        else
            time += v[i - 1] - v[i] + 2;
        
    }
    cout << time << endl;
}
