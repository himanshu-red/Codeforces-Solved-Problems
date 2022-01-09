#include <bits/stdc++.h>
using namespace std;
vector<int> getDigits(string str)
{
    vector<int> v;
    for (int i = 0; i < str.size(); i++)
    {
        v.push_back(str[i] - 48);
    }
    return v;
}
void printVec(vector<int> v)
{
    for (auto &i : v)
        cout << i ;
}
int main()
{
    string str;
    vector<int> v;
    cin >> str;
    v = getDigits(str);
    int rep1 = v[v.size()-1]; 
    int rep2 = -1; 
    vector<int> evens;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] % 2 == 0)
        {
            evens.push_back(i);
        }
    }

    for (int i = 0; i < evens.size(); i++)
    {
        if (v[v.size() - 1] > v[evens[i]] || i == evens.size()-1)
        {
            rep2 = v[evens[i]]; 
            int temp = v[evens[i]];
            v[evens[i]] = v[v.size()-1]; 
            v[v.size()-1] = temp; 
            break; 
        }
    }

    if (rep2 == -1)
        cout << rep2 << endl; 
    else 
        printVec(v); 

}
