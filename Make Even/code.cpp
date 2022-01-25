#include <bits/stdc++.h>
using namespace std;
bool checkFirst(int num)
{
  int tens = pow(10, floor(log10(num)));
  if (tens == 1)
    return false;
  if ((num / tens) % 2 == 0)
    return true;
  else
    return false;
}
bool hasEven(int num)
{
  while (num )
  {
    if ((num % 10) % 2 ==0) return true; 
    num/=10; 
  }
  return false; 
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int num; 
    cin >> num;
    if ((num % 10) % 2 == 0)
      cout << 0 << endl;
    else if (checkFirst(num))
      cout << 1 << endl;
    else if (hasEven(num))
      cout << 2 << endl;
    else
      cout << -1 << endl;
  }
}
