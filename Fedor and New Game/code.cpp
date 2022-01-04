#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, k, fedor;
    int count = 0, currDif;
    cin >> n >> m >> k;
  
    //  n -> types of soldiers
    //  m+1 -> no of players
    //  k -> max bit difference

    vector<int> players(m);

    for (int i = 0; i < m; i++)
    {
        cin >> players[i];
    }
  
    cin >> fedor;
  
    for (int i = 0; i < m; i++)
    {
        currDif = 0;
        bool frnd = true;
        for (int j = 0; j < n; j++)
        {
            int bit = (1 << j);
            if ((fedor & bit) && (!(players[i] & bit)) || (!(fedor & bit)) && (players[i] & bit)) //if one's bit is set and other's is not set and vice versa, then count. 
                currDif++;
            if (currDif > k)  // if no of differences exceeds k then break
            {
                frnd = false;
                break;
            }
        }
        if (frnd)  // if no of differences doesn't exceed k then, it's a friend
        {
            // cout << players[i] << " is a friend. " << endl;
            count++;
        }
    }
    cout << count << endl;
}
