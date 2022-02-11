#include <string>
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        string str;
        cin >> str;
        int paren = 0;
        for (int i = size - 1; i >= 0; i--)
        {
            if (!isalpha(str[i]))
                paren++;
            else
                break;
        }
        cout << ((paren > (size - paren)) ? ("Yes") : ("No")) << endl;
    }
}
