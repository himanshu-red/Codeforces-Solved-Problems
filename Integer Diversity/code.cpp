#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size, temp, count = 0;
        cin >> size;
        bool zero = false;
        vector<int> v(101, 0);
        for (int i = 0; i < size; i++)
        {
            cin >> temp;
            if (temp == 0)
                zero = true;
            else if (v[abs(temp)] == 0 && temp > 0) 
                v[abs(temp)] = 1;
            else if (v[abs(temp)] == 0 && temp < 0)
                v[abs(temp)] = 3;
            else if (v[abs(temp)] == 1 && temp > 0)
                v[abs(temp)] = 2;
            else if (v[abs(temp)] == 3 && temp < 0)
                v[abs(temp)] = 4;
            else if ((v[abs(temp)] == 1 && temp < 0) || (v[abs(temp)] == 3 && temp > 0))
                v[abs(temp)] = 5;
            else if ((v[abs(temp)] == 2 && temp < 0) || (v[abs(temp)] == 4 && temp > 0))
                v[abs(temp)] = 5;
        }
        for (int i = 1; i <= 100; i++)
        {
            if (v[i] == 1 || v[i] == 3)
                count++;
            else if (v[i] == 2 || v[i] == 4)
                count += 2;
            else if (v[i] == 5)
                count += 2;
        }
        cout << count + ((zero) ? (1) : (0)) << endl;
    }
}
