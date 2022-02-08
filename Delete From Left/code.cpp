#include <bits/stdc++.h>
using namespace std; 
int main()
{
    string str1 , str2; 
    cin >> str1 ; 
    cin >> str2; 
    int i = str1.size()-1, j = str2.size()-1; 
    while (i >= 0 && j >= 0 && str1[i] == str2[j])
    {
        i--; 
        j--; 
    }
    cout << str1.size()-(str1.size()-(i+1)) +  (str2.size() - (str2.size()-(j+1))) << endl; 
}
