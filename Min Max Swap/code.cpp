#include <bits/stdc++.h>
using namespace std;
int getMax(vector<int> v1, vector<int> v2)
{
    int max = 0;
    for (int i = 0; i < v1.size(); i++)
    {
        if (v1[i] > v2[i])
        {
            int temp = v1[i];
            v1[i] = v2[i];
            v2[i] = temp;
        }
        if (max < v1[i])
            max = v1[i];
    }
    return max; 
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        vector<int> v1(size), v2(size);
        int m1 = 0, m2 = 0;
        for (int &i : v1)
        {
            cin >> i;
            if (m1 < i)
                m1 = i;
        }
        for (int &i : v2)
        {
            cin >> i;
            if (m2 < i)
                m2 = i;
        }
        int max1 = (m1 < m2) ? (m2) : (m1);
        int max2 = (m1 == max1) ? (getMax(v2, v1)) : (getMax(v1, v2));
        cout << max1 * max2 << endl;
    }
}
