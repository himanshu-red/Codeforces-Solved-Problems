#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    vector<int> hash(27, 0);
    bool possible = false;
    for (int i = 0; i < n; i++)
    {
        hash[str[i] - 96]++;
        if (hash[str[i] - 96] > 1)
        {
            possible = true;
            break;
        }
    }
    cout << ((possible || n == 1) ? ("Yes") : ("No")) << endl;
}
