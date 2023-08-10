#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        int x[a], size;
        for (int i = 0; i < a; i++)
            cin >> x[i];
        for (int j = 0; j < a; j++)
        {
            string st;

            cin >> size >> st;

            int start = x[j];

            for (int k = 0; k < size; k++)
            {

                if (st[k] == 'U')
                {
                    if (start != 0)
                        start -= 1;
                    else
                        start = 9;
                }
                else
                {
                    if (start != 9)
                        start += 1;
                    else
                        start = 0;
                }
            }

            cout << start << " ";
        }

        cout << endl;
    }

    return 0;
}