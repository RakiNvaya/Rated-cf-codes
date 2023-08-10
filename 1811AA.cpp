#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        long long a, b, flag = 0;
        string ch;

        cin >> a >> b >> ch;

        for (int i = 0; i < a; i++)
        {
            if (ch[i] - '0' < b)
            {
                flag = 1;
                cout << b;
                b = -2;
            }

            cout << ch[i];
        }
        if (flag == 0)
            cout << b;

        cout << endl;
    }

    return 0;
}