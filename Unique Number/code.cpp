#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        vector<int> v ;
        int i = 9;
        while (i > 0 && accumulate(v.begin(), v.end(), 0) + i < num)
        {
            v.push_back(i);
            i--;
        }
        if (i == 0)
            cout << -1;
        else
        {
            cout << num - accumulate(v.begin(), v.end(), 0);
            reverse(v.begin(), v.end());
            for (auto &i : v)
                cout << i;
        }
        cout << endl; 
    }
}
