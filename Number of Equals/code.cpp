#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    vector<int> v1(m);
    vector<int> v2(n);
    for (auto &i : v1)
        cin >> i;
    for (auto &i : v2)
        cin >> i;
    int i = 0, j = 0;
    int currCount = 0;
    int totalCount = 0;
    while (j < v2.size())
    {
        if (i < v1.size() && v1[i] <= v2[j])
        { 
            if (v1[i] == v2[j]) currCount++;
            i++;
        }
        else if (i == v1.size() || v1[i] > v2[j])
        {
            int equalJs = 1;
            while (j < v2.size() - 1 && v2[j] == v2[j + 1])
            {
                equalJs++;
                j++;
            }
            totalCount += (currCount * equalJs);
            currCount = 0;
            j++;
        }
    }
    cout << totalCount << endl;
}
