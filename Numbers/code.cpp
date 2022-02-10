#include <bits/stdc++.h>
using namespace std;
int getBase(int num, int base)
{
    int rem = 0;
    while (num >= base)
    {
        rem += num % base;
        num /= base;
    }
    rem += num;
    return rem;
}
int main()
{
    int num;
    int sum = 0;
    cin >> num;
    for (int i = 2; i < num; i++)
        sum += getBase(num, i);
    cout << sum / __gcd(sum, num - 2) << "/" << (num - 2) / __gcd(sum, num - 2) << endl;
}
