#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string ch;
        int freq[200] = {0};
        cin >> ch;

        int add1 = 0, add2 = 0;

        int size = ch.size();

        for (int i = 0; i < size; i++)
            freq[ch[i]]++;

        for (int k = 97; k <= 122; k++)
        {
            if (freq[k] != 0)
            {
                if (freq[k] % 2 == 0)
                    add1++;
                else if (freq[k] % 2 == 1)
                    add2++;
            }
        }
        if (add1 * 2 + add2 == size)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}