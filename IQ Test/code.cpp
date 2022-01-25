#include <bits/stdc++.h>
using namespace std; 
int main()
{
    int t; 
    cin >> t; 
    int odds = 0, evens = 0; 
    int lastOddIndex, lastEvenIndex; 
    vector<int> v(t); 
    int temp; 
    for (int i = 0; i< t; i++)
    {
        cin >> temp; 
        if (temp %2)
        {
            odds++; 
            lastOddIndex = i; 
        }
        else
        {
            evens++; 
            lastEvenIndex = i; 
        }
    }
    if (odds == 1) cout << lastOddIndex+1 << endl; 
    else    cout << lastEvenIndex+1 << endl; 
}
