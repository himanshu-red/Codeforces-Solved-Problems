#include <bits/stdc++.h>
using namespace std;
int n = 5000;
vector<int> arr(n, 0);
vector<int> primes;
void seive()
{
  arr[0] = arr[1] = 1;
  for (int i = 2; i <= n / 2; i++)
  {
    if (arr[i] == 0)
    {
      primes.push_back(i); 
      for (int j = i * 2; j < n; j += j)
      {
        arr[j]  = 1; 
      }
    }
  }
}
int main()
{
  seive();
  int t; 
  cin >> t; 
  while (t--)
  {
    int num; 
    cin >> num; 
    for (int i = 0; i< num; i++)
    {
      cout << primes[i] << " " ; 
    }
    cout << endl; 
  }
}
