#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string str;
    cin >> t;
    while (t--)
    {
        cin >> str;
        if (str.size() == 2)
        {
            (str[0] < str[1]) ? (cout << str[0] << " " << str[1] << endl) : (cout << str[1] << " " << str[0] << endl);
        }
        else
        {
            string str2 = str; 
            sort(str2.begin(), str2.end()); 
            bool crossed = false; 
            cout << str2[0] << " " ; 
            for (int i = 0; i< str.size(); i++)
            {
                if (crossed == false && str2[0] == str[i] )
                {
                    crossed = true; 
                    continue; 
                }
                cout << str[i]; 
            }
            cout << endl;  
        }
    }
}
