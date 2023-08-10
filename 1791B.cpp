#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int n1, x = 0, y = 0, flag = 0;
        string ch;
        cin >> n1 >> ch;

        for (int i = 0; i < n1; i++)
        {
            if (ch[i] == 'U')
                x++;
            else if (ch[i] == 'D')
                x--;
            else if (ch[i] == 'R')
                y++;
            else
                y--;

            if (x == 1 && y == 1)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}