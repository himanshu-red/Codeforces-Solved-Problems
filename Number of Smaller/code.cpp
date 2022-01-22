#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    vector<int> v1(m);
    vector<int> v2(n);
    for (auto &i : v1)
        cin >> i;
    for (auto &i : v2)
        cin >> i;
    int i = 0, j = 0;
    int count = 0; 
    while ( j < v2.size())
    {
        if (i < v1.size() && v1[i] < v2[j])
        {
            count++; 
            i++; 
        }
        else if (i == v1.size() || v1[i]  >= v2[j])
        {
            cout << count << " " ; 
            j++; 
        }
    }
}
