#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, temp;
    cin >> n >> k;
    vector<int> v(k);
    set<int> s;
    for (int i = 0; i < k; i++)
    {
        cin >> v[i];
        s.insert(v[i]);
    }
    int i = 1;
    int j = 0;
    int count = 0;
    while (i <= n * k)
    {
        if (count == 0 && j < k)
        {
            cout <<  v[j++] << " ";
            count++;
        }
        if (count < n && s.count(i) == 0)
        {
            cout <<  i << " " ;
            count++; 
        }
        if (count == n)
        {
            cout << endl;
            count = 0;
        }
        i++;
    }
}
