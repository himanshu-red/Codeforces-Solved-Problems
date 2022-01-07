#include <bits/stdc++.h>
using namespace std; 
int getMaxDiff(vector<int> lights)
{
    int diff = 0; 
    for (int i =1; i< lights.size(); i++)
    {
        // cout << lights[i] << " " << lights[i-1] << endl; 
        if (diff < (lights[i] - lights[i-1]))
            diff = lights[i] - lights[i-1]; 
    }
    return diff; 
}
int main()
{
    int n, l ;
    int first = 0; 
    int last = 0; 
    cin >> n >> l; 
    vector<int> lights(n); 
    for (int i = 0; i< n; i++)
    {
        cin >> lights[i]; 
    }
    sort(lights.begin(), lights.end()); 
    if (*lights.begin() != 0)
        first = *lights.begin(); 
    if (*(lights.end()-1) != l)
        last = l - *(lights.end()-1); 
    int maxCorner = (first > last) ? (first) : (last); 
    int maxDiff = getMaxDiff(lights); 
    if (maxCorner > maxDiff/(double)2)
        // cout <<fixed << setprecision(10) <<  maxCorner << endl; 
        printf ("%.10lf",(double)maxCorner); 
    else 
        printf("%.10lf", maxDiff/(double)2); 
}
