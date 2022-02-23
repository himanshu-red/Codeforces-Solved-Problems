#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str; 
        cin >> str; 
        int zeroes = 0, ones = 0; 
        for (int i = 0; i< str.size(); i++)
        {
            if (str[i] == '0') zeroes++; 
            else ones++; 
        }
        cout << ((zeroes == ones) ? (--zeroes) : ((zeroes < ones) ? (zeroes) : (ones))) << endl; 
    }
}
