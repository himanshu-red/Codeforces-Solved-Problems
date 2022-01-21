#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int size;
    while (t--)
    {
        cin >> size;
        int temp;
        int zeroes = 0;
        int ones = 0;
        for (int i = 0; i < size; i++)
        {
            cin >> temp;
            if (temp == 1)
                ones++;
            else if (temp == 0)
                zeroes++;
        }
        if (ones == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            unsigned long long zCom = pow(2, zeroes);
            cout <<1ll*  ones * zCom << endl;
        }
    }
}
