#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, temp, currSum, lowestSum, index;
    cin >> n >> k;
    vector<int> heights;
    for (int i = 0; i < k; i++)
    {
        cin >> temp;
        heights.push_back(temp);
    }
    currSum = accumulate(heights.begin(), heights.end(), 0);
    lowestSum = currSum;
    index = 0;
    for (int i = k; i < n; i++)
    {
        cin >> temp;
        heights.push_back(temp);
        currSum += (temp - heights[i - k]);
        if (currSum < lowestSum)
        {
            lowestSum = currSum;
            index = i - k + 1;
        }
    }
    cout << index+1 << endl;
}
