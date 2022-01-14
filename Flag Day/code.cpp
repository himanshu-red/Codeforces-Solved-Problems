#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; // no of dancers
    int m; // of of dances
    cin >> n >> m;
    vector<int> dress(n + 1, 0);
    int a, b, c;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b >> c;
        vector<bool> tempHash(4, false);
        tempHash[dress[a]] = true;
        tempHash[dress[b]] = true;
        tempHash[dress[c]] = true;
        if (dress[a] == 0)
        {
            for (int i = 1; i < 4; i++)
            {
                if (tempHash[i] == false)
                {
                    dress[a] = i;
                    tempHash[i] = true;
                    break;
                }
            }
        }
        if (dress[b] == 0)
        {
            for (int i = 1; i < 4; i++)
            {
                if (tempHash[i] == false)
                {
                    dress[b] = i;
                    tempHash[i] = true;
                    break;
                }
            }
        }
        if (dress[c] == 0)
        {
            for (int i = 1; i < 4; i++)
            {
                if (tempHash[i] == false)
                {
                    dress[c] = i;
                    tempHash[i] = true;
                    break;
                }
            }
        }
      
    }
    for (int i = 1; i < n + 1; i++)
    {
        cout << dress[i] << " ";
    }
}
