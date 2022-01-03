#include <bits/stdc++.h>
using namespace std; 
int main()
{
    vector<int> v(3); 
    for (int i = 0; i< 3; i++)
    {
        cin >> v[i]; 
    }
    sort(v.begin(), v.end()); 
    if (v[0] == v[1] && v[0] == v[2] && v[0] == 1)
        cout << "3" << endl; 
    else if (v[0] == 1)
        cout << v[2] * ( v[1] + v[0]) << endl; 
    else 
        cout << accumulate(v.begin(), v.end(), 1, multiplies<int>()); 
}
