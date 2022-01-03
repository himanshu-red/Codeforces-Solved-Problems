#include <bits/stdc++.h>
using namespace std; 
int main()
{
    vector<int>guestUni(101); 
    vector<int> aVec; 
    int n, a, b;
    int count = 0;  
    cin >> n; 
    for (int i = 0; i< n; i++)
    {
        cin >> a >> b; 
        guestUni[b] += 1; 
        aVec.push_back(a);  
    }
    for (int i = 0; i< n; i++)
    {
        count += guestUni[aVec[i]]; 
    }
    cout << count << endl; 
}
