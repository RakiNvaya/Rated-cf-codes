#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string ch;
        cin >> ch;
        int count = 1;

        for (int i = 'a'; i <= 'z'; i++)
            for (int j = 'a'; j <= 'z'; j++)
            {
                if (i == ch[0] && j == ch[1])
                {
                    cout << count << endl;
                    break;
                }

                else
                {
                    if (i != j)
                        count++;
                }
            }
    }

    return 0;
}