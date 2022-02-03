#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> v(n);
    for (auto &i : v)
        cin >> i;
    set<int> s; 
    for (int j = 0; j < m; j++)
    {
        char max = '0'; 
        vector<int> temp; 
        for (int i= 0; i < n; i++)
        {
            if (max < v[i][j])
            {
                max = v[i][j]; 
                temp.clear(); 
                temp.push_back(i+1); 
            }
            else if (max == v[i][j])
            {
                temp.push_back(i+1); 
            }
        }
        for (int i = 0; i< temp.size(); i++)
        {
            s.insert(temp[i]); 
        }
    }
    cout << s.size() << endl; 
}
