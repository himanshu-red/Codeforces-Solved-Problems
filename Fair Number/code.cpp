#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
void addOne(vector<int> &v)
{
    int carry = (v[0] + 1) / 10;
    v[0] = (v[0] + 1) % 10;
    int i = 1;
    while (i < v.size() && carry)
    {
        int temp = carry;
        carry = (v[i] + carry) / 10;
        v[i] = (v[i] + temp) % 10;
        i++;
    }
    if (carry)
        v.push_back(carry);
}
bool checkDiv(vector<int> v, ll num)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] && num % v[i] != 0)
            return false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll num, temp;
        cin >> num;
        temp = num;
        vector<int> v;
        while (temp > 0)
        {
            v.push_back(temp % 10);
            temp /= 10;
        }
        while (!checkDiv(v, num))
        {
            addOne(v);
            num++;
        }
        cout << num << endl;
    }
}
