#include <bits/stdc++.h>
using namespace std; 
int main()
{
    int t; 
    long long i; 
    int count = 0; 
    long long num;
    cin >> t; 
    while (t--)
    {
        cin >> num; 
        count = 1; 
        i = 2; 
        while (i * i * i <= num)
        {
            count++; 
            if (sqrt(i*i*i) == floor(sqrt(i*i*i))) count--; 
            i++; 
        }
        i = 2; 
        while (i * i <= num)
        {
            count++;
            i++;
        }
        cout << count << endl; 
    }
}
