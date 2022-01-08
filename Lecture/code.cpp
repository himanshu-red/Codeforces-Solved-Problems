#include <bits/stdc++.h>
using namespace std;
int main()
{
    int strLen, words;
    cin >> strLen >> words;
    string t1, t2;
    map<string, string> m;
    for (int i = 0; i < words; i++)
    {
        cin >> t1 >> t2;
        // cout << t1 << " " << t2 <<  endl;
        m[t1] = (t1.size() == t2.size()) ? (t1) : ((t1.size() > t2.size()) ? (t2) : (t1));
    }
    t2.clear();
    for (int i = 0; i< strLen; i++)
    {
        cin >> t1;
        t2 += m[t1]; 
        t2 += " " ; 
    }
    t2.pop_back(); 
    cout << t2 << endl; 
}
