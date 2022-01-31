#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size, firstIndex = -1;
        cin >> size;
        vector<char> v(size);
        for (int i = 0; i < v.size(); i++)
        {
            cin >> v[i];
            if (v[i] != '?' && firstIndex == -1)
                firstIndex = i;
        }
        if (firstIndex == -1)
            v[0] = 'R';
        for (int i = firstIndex - 1; i >= 0; i--)
        {
            if (v[i + 1] == 'B')
                v[i] = 'R';
            else
                v[i] = 'B';
        }
        for (int i = firstIndex + 1; i < size; i++)
        {
            if (v[i] == '?')
            {
                if (v[i - 1] == 'B')
                    v[i] = 'R';
                else
                    v[i] = 'B';
            }
        }
        for (auto &i : v)
            cout << i;
        cout << endl;
    }
}

