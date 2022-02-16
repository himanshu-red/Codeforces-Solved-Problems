/*-----------------------------------------HIMANSHU RANJAN---------------------------------------*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
#define endl '\n'
#define deb(x) cerr << (#x) << " is " << (x) << endl;
template <class T>
void printVec(T &v)
{
    cout << "[ ";
    for (auto &i : v)
        cout << i << " ";
    cout << " ]" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        string a;
        cin >> a;
        // deb(count(a.begin(), a.end(), '2'));
        int zeroes = count(a.begin(), a.end(), '2');
        if (zeroes == 2 || zeroes == 1)
            cout  << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            vector<vector<char>> v(size, vector<char>(size, '.'));
            for (int i = 0; i < size; i++)
            {
                bool found = false;
                for (int j = 0; j < size; j++)
                {
                    if (i == j)
                        v[i][j] = 'X';
                    else if (a[i] == '2' && !found)
                    {
                        if (a[j] == '2' && v[j][i] != '+')
                        {
                            v[i][j] = '+';
                            found = true;
                        }
                        else
                            v[i][j] = '-';
                    }
                    else if (a[i] == '2' && found)
                    {
                        v[i][j] = '-';
                    }
                    else if (a[i] == '1' && a[j] == '1')
                    {
                        v[i][j] = '=';
                    }
                    else if (a[i] == '1' && a[j] == '2')
                    {
                        v[i][j] = '+';
                    }
                }
            }
            for (int i = 0; i < size; i++)
            {
                for (int j = 0;j < size; j++)
                {
                    if (a[i] == '2' && i > 1 && j < i && v[i][j] == v[j][i])
                    {
                        v[i][j] = (v[i][j] == '+') ? '-' : '+';
                    }
                    cout << v[i][j] ; 
                }
                cout << endl; 
            }
        }
    }
}
