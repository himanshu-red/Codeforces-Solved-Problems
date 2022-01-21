#include <bits/stdc++.h>
using namespace std;
bool checkPrime(int num)
{
    for (int i = 2; i<= sqrt(num); i++)
    {
        if (num % i == 0) return false; 
    }
    return true; 
}
int main()
{
    int t;
    int size;
    bool found; 
    cin >> t;
    while (t--)
    {
        cin >> size;
        vector<int> v(size);
        int oddInd;
        for (auto &i : v)
            cin >> i;
        int sum = accumulate(v.begin(), v.end(), 0);
        if (checkPrime(sum))
        {
            found = false; 
            cout << v.size()-1 << endl;
            for (int i = 0; i < v.size(); i++)
            {
                if (!(found) && v[i] % 2)
                {
                    found = true;
                    continue;
                }
                cout << i+1 << " ";
            }
        }
        else
        {
            cout << v.size() << endl; 
            for (int i = 0; i < v.size(); i++)
            {
                cout << i+1 << " ";
            }
        }
        cout << endl;
    }
}
