#include <bits/stdc++.h>
using namespace std;
int getMex(vector<int> &v, int freq)
{
    for (int i = 0; i< v.size(); i++)
    {
        if (v[i] == freq)
        {
            v[i]++; 
            return i; 
        }
    }
    return 101;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size, input;
        cin >> size;
        vector<int> v(101, 0);
        for (int i = 0; i < size; i++)
        {
            cin >> input;
            if (v[input] < 2)
                v[input]++;
        }
        int mex1 = getMex(v, 0);
        int mex2 = getMex(v, 1);
        cout << mex1 + mex2 << endl;
    }
}
