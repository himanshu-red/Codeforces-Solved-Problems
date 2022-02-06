#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int evens = 0, odds = 0;
    int input; 
    for (int i = 0; i< n; i++)
    {
        cin >> input; 
        (input % 2) ? (odds++) : (evens++); 
    }
    cout << ((odds<evens) ? (odds) : (evens)) << endl; 
}
