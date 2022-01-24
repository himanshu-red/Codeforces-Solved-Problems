#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x; 
    int temp;  
    cin >> n >> x; 
    int sum = 0; 
    for (int i =0; i< n; i++)
    {
        cin >> temp; 
        sum += temp; 
    }
    int totalCards = abs(sum) / x; 
    if (abs(sum) % x != 0) totalCards ++; 
    cout << totalCards << endl; 

}
