#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int t = 0, f = 0, s = 0;
        int num;
        cin >> num;
        if (num == 8)     // exception  
            cout << 1 << " " << 1 << " " << 0 << endl;  
        else if (num == 11)   // exception
            cout << 2 << " " << 1 << " " << 0 << endl; 
        else
        {
            while (num % 5 != 0 && num % 3 != 0)
            {
                s++;
                num -= 7;
            }
            if (num > 0)
            {
                if (num % 3 == 0)
                    t = num / 3;
                else
                    f = num / 5;
            }
            if (num < 0)
                cout << -1 << endl;
            else
                cout << t << " " << f << " " << s << endl;
        }
    }
}
