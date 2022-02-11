#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, size, temp;
    cin >> t;
    while (t--)
    {
        cin >> size;
        int min = INT_MAX;
        int max = INT_MIN;
        for (int i = 0; i < size; i++)
        {
            cin >> temp;
            if (temp > max)
                max = temp;
            if (temp < min)
                min = temp;
        }
        cout << max - min << endl;
    }
}
