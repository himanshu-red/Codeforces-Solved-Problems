#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    bool sameRow;
    bool sameCol;
    bool sameCoordinate;
    bool blackInMatrix;
    int m, n, r, c;
    cin >> t;
    while (t--)
    {
        cin >> m >> n >> r >> c;
        r--;
        c--;
        char cell;
        sameRow = false;
        sameCol = false;
        sameCoordinate = false;
        blackInMatrix = false;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> cell;
                if (cell == 'B')
                    blackInMatrix = true;
                if (j == c && cell == 'B')
                    sameCol = true;
                if (i == r && cell == 'B')
                    sameRow = true;
                if (i == r && c == j && cell == 'B')
                    sameCoordinate = true; 
            }
        }
        if (sameCoordinate)
            cout << 0 << endl; 
        else if (sameCol || sameRow)
            cout << 1 << endl; 
        else if (blackInMatrix)
            cout << 2 << endl; 
        else 
            cout << -1 << endl; 
    }
}
