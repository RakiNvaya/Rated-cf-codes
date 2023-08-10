
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, freq[100] = {0}, count = 0;
        string ch;
        cin >> a >> ch;
        for (int i = 0; i < a; i++)
            freq[ch[i]]++;

        for (int j = 65; j < 91; j++)
        {
            if (freq[j] != 0)
                count += freq[j] + 1;
        }

        cout << count << endl;
    }

    return 0;
}