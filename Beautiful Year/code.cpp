#include <iostream>
using namespace std;
int BeautifulYear(int);
int main()
{
    int yr;
    cin >> yr;
    cout << BeautifulYear(++yr);
}
int BeautifulYear(int yr)
{
    int temp = yr, i = 0, a[4], ten = 1;
    for (int i = 0; i < 4; i++)
    {
        a[i] = ((yr / ten) % 10);
        ten *= 10;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (a[i] == a[j])
            {
                return BeautifulYear(++temp);
            }
        }
    }
    return temp;
}
