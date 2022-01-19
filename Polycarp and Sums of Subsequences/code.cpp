#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin >> t; 
    while (t--)
    {
        vector<int> data(7); 
        for (auto &i : data) cin >> i; 
        cout << data[0] << " " << data[1] << " " << data[6] - (data[0] + data[1]) << endl; 
    }
}
