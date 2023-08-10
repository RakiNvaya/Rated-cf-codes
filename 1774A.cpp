#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, count = 0;
        string ch;
        cin >> a >> ch;

        for (int i = 0; i < a; i++)
            if (ch[i] == '1')
                count++;

        if (count == 2)
            count = 1;
        else
            count /= 2;

        for (int j = 1; j < a ; j++)
        {
            if (ch[j] == '1' && count != 0)
            {
                cout << "-";
                count--;
            }
            else
                cout << "+";
        }

        cout << endl;
    }

    return 0;
}