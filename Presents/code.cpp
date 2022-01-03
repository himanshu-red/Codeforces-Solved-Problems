#include <bits/stdc++.h>
using namespace std; 
int main()
{
  int n; 
  int gift; 
  cin >> n; 
  vector<int> v(n+1); 
  for (int i = 1; i<= n; i++)
  {
      cin >> gift; 
      v[gift] = i; 
  }
  for (int i = 1; i<= n; i++)
  {
      cout << v[i] << " " ; 
  }
}
