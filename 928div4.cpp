#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string st;
        cin >> st;
        int a = 0;
        int b = 0;
        for (int i = 0; i < 5; i++)
        {
            if (st[i] == 'A')
            {
                a++;
            }
            else
            {
                b++;
            }
        }
        if (a > b)
        {
            cout << "A" << endl;
        }
        else
        {
            cout << "B" << endl;
        }
    }
}