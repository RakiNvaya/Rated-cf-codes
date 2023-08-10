#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {

        string a;
        cin >> a;
        int sum1 = a[0] - '0' + a[1] - '0' + a[2] - 'a';
        int sum2 = a[3] - '0'+ a[4] - 'a'+ a[5]-'0';

        if (sum1 == sum2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}