#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    while (!isalpha(str[str.size() - 1]))
        str.pop_back();
    char lChar = str[str.size() - 1];
    lChar = tolower(lChar); 
    if (lChar == 'a' || lChar == 'e' || lChar == 'i' || lChar == 'o' || lChar == 'y' || lChar == 'u')
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
