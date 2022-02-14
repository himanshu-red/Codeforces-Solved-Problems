/*-----------------------------------------HIMANSHU RANJAN---------------------------------------*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
#define endl '\n'
#define watch(x) cerr << (#x) << " is " << (x) << endl;
void concatenate(string &str, int num)
{
    stringstream ss; 
    string temp; 
    ss << num; 
    ss >> temp; 
    str += temp; 
}
int main()
{
    int k;
    cin >> k;
    int num = 1;
    string str = "0";
    while (str.size() - 1 < k)
    {
        concatenate(str, num); 
        num++; 
    }
    cout << str[k] << endl; 
}
