#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string ch;
        int sum1 = 0, sum2 = 0;
        cin >> ch;

        for (int i = 0; i < 3; i++)
            sum1 += ch[i] - '0';
        for (int j = 3; j < 6; j++)
            sum2 += ch[j] - '0';

        if (sum1 == sum2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}