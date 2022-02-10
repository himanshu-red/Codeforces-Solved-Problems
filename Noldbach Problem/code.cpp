#include <bits/stdc++.h>
using namespace std;
bool checkPrime(int num)
{
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int n, k;
    vector<int> primes;
    cin >> n >> k ;
    for (int i = 2; i <= n; i++)
    {
        if (checkPrime(i))
            primes.push_back(i);
    }
    for (int i = primes.size() - 1; k && i >= 0; i--)
    {
        for (int j = 0; j < primes.size() - 1; j++)
        {
            if (primes[j] + primes[j + 1] + 1 == primes[i])
            {
                k--;
                break;
            }
        }
    }
    cout << ((k == 0) ? ("YES") : ("NO")) << endl;
}
