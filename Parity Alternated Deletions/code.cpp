#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long; 
void pop_(vector<ll> &e, vector<ll> &o)
{
    e.pop_back(); 
    while (e.size() != 0 && o.size() != 0)
    {
        o.pop_back(); 
        e.pop_back(); 
    }
}
int main()
{
    int t;
    ll temp;
    cin >> t;
    vector<ll> e, o;
    for (int i = 0; i < t; i++)
    {
        cin >> temp;
        (temp % 2) ? (o.push_back(temp)) : (e.push_back(temp));
    }
    if (o.size() == e.size())
        cout << 0 << endl;
    else
    {
        sort(e.begin(), e.end());
        sort(o.begin(), o.end());
        (e.size() > o.size()) ? (pop_(e, o)) : (pop_(o, e)); 
        cout << ( (e.size() != 0) ? (accumulate(e.begin(), e.end(), 0)) : (accumulate(o.begin(), o.end(), 0))) << endl; 
    }
}
