#include <bits/stdc++.h>
using namespace std;
void print(int total, int binary)
{
    cout << total << endl;
    for (int i = 0; i < total; i++)
    {
        cout << binary << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        vector<int> v(size);
        int evens = 0, odds = 0, zeroes = 0, lastOne = 0, count = 0;
        for (int i = 0; i < size; i++)
        {
            cin >> v[i];
            if (v[i])
            {
                lastOne = i;
                if (i % 2)
                    odds++;
                else if (v[i])
                    evens++;
            }
            else
                zeroes++;
        }
        bool diff = ((odds + evens) % 2) ? (true) : (false);
        (zeroes >= size / 2) ? (print(zeroes, 0)) : ((diff) ? (print(odds + evens - 1, 1)) : (print(odds + evens, 1)));
    }
}
