#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, count = 0;
    string temp;
    vector<int> hash(27, 0);
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> temp;
        hash[temp[0] - 96]++;
    }
    for (int i = 1; i <= 26; i++)
    {
        if (hash[i] > 1)
        {
            int a = hash[i] / 2;
            int b = (hash[i] % 2) ? (a + 1) : (a);
            count += a * (a-1) / 2;
            count += b * (b-1) /2;
        }
    }
    cout << count << endl;
}
