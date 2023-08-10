#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, arr[3];
        cin >> a;
        a--;

        for (int i = 0; i < 3; i++)
            cin >> arr[i];

        int m = a, open = 1;

        for (int k = 0; k < 3; k++)
        {
            if (arr[m] != 0)
            {
                m = arr[m] - 1;
                open++;
            }
        }
        if (open == 3)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}