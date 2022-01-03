#include <bits/stdc++.h>
using namespace std; 
int main()
{
    int m, n; 
    cin >> n >> m; 
    // n-> horizontal
    // m-> vertical
    bool Akshat = false; 
    while (m != 0 && n != 0)
    {
        m--; 
        n--; 
        if (Akshat)
            Akshat = false; 
        else
            Akshat = true; 
    }
    if (Akshat)
        cout << "Akshat" << endl; 
    else 
        cout << "Malvika" << endl; 
}
