#include <bits/stdc++.h>
using namespace std;
int getNext(int val, int s, int e, vector<int> v)
{
    int size = e+1; 
    int moves = 1; 
    while (v[s] != val && v[e] != val)
    {
        s++; 
        e--; 
        moves++; 
    }
    return moves; 
}
int main()
{
    int t;
    int size;
    cin >> t;
    while(t--)
    {
        cin >> size;
        int min = 100;
        int minIndex;
        int max = 1;
        int maxIndex;
        int temp;
        int moves;
        vector<int> v(size); 
        for (int i = 0; i < size; i++)
        {
            cin >> temp;
            v[i] = temp; 
            if (temp > max)
            {
                max = temp;
                maxIndex = i;
            }
            if (temp < min)
            {
                min = temp;
                minIndex = i;
            }
        }
        int i = 0, j = size - 1; 
        while (v[i] != min && v[i] != max && v[j] != min  && v[j] != max)
        {
            i++; j--; 
        }
        if (v[i] == min)
        {
            moves = i+1; 
            moves += getNext(max, ++i, size-1, v); 
        }
        else if (v[i] == max)
        {
            moves = i+1; 
            moves += getNext(min, ++i, size-1, v); 
        }
        else if (v[j] == max)
        {
            moves = size - j ; 
            moves += getNext(min , 0, --j, v); 
        }
        else if (v[j] == min)
        {
            moves = size - j; 
            moves += getNext(max, 0, --j, v); 
        }
        cout << moves << endl; 
        
    }
}
