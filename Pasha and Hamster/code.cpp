#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    vector<char> hash(n + 1, 'c');
    vector<int> v1(a), v2(b);
    for (int i = 0; i < a; i++)
    {
        cin >> v1[i];
        hash[v1[i]] = 'a';
    }
    for (int i = 0; i < b; i++)
    {
        cin >> v2[i];
        if (hash[v2[i]] == 'c') 
            hash[v2[i]] = 'b'; 
    }
    for (auto &i : hash)
    {
        if (i == 'a')
            cout << 1 << " " ; 
        else if (i == 'b')
            cout << 2 << " " ; 
    }
}
