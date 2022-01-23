#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool isPrime(int num)
{
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}
ll getMinRow(int m, int n, vector<vector<int>> v)
{
    ll sum, tMin = LONG_LONG_MAX;
    for (int i = 0; i < m; i++)
    {
        ll sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += v[i][j];
        }
        if (tMin > sum)
        {
            tMin = sum;
        }
    }
    return tMin;
}
ll getMinCol(int m, int n, vector<vector<int>> v)
{
    ll sum, tMin = LONG_LONG_MAX;
    for (int i = 0; i < n; i++)
    {
        ll sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += v[j][i];
        }
        if (tMin > sum)
        {
            tMin = sum;
        }
    }
    return tMin;
}
int getMoves(int num)
{
    int count = 0;
    if (num == 1)
        return 1;
    if (num == 2)
        return 0;
    if (num % 2 == 0)
    {
        num++;
        count++; 
    }
    while (!(isPrime(num)))
    {
        isPrime(num += 2);
        count += 2;
    }
    return count;
}
int main()
{
    int r, c, num;
    cin >> r >> c;
    vector<vector<int>> v(r);
    map<int, int> m;
    for (int i = 0; i < r; i++)
    {
        vector<int> temp(c);
        for (int j = 0; j < c; j++)
        {
            cin >> num;
            if (m.find(num) == m.end())
            {
                m[num] = getMoves(num);
            }
            temp[j] = m[num];
        }
        v[i] = temp;
        temp.clear();
    }
    ll minRow = getMinRow(r, c, v);
    ll minCol = getMinCol(r, c, v);
    (minRow < minCol) ? (cout << minRow << endl) : (cout << minCol << endl);
}
