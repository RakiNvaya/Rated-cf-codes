#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        string ch;
        cin >> ch;

        int r = 0, g = 0, b = 0, add = 0;

        int size = ch.size();
        for (int i = 0; i < size; i++)
        {
            if (ch[i] == 'r')
                r++;
            else if (ch[i] == 'g')
                g++;
            else if (ch[i] == 'b')
                b++;
            else if (ch[i] == 'R')
            {
                if (r > 0)
                    add++;
            }
            else if (ch[i] == 'G')
            {
                if (g > 0)
                    add++;
            }
            else if (ch[i] == 'B')
            {
                if (b > 0)
                    add++;
            }
        }

        if (add == 3)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}