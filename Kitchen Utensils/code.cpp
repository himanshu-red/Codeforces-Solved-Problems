#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, input;
    cin >> n >> k;
    map<int, int> m;
    int max = 0, lost = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        m[input]++;
        if (m[input] > max)
            max = m[input];
    }
    int maxOne = (max % k == 0) ? (max) : (k * (max / k + 1)); 
    for (auto &i :m)
        lost += (maxOne -i.second); 
    cout << lost << endl; 

}
