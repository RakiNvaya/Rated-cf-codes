#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;

        int sum1 = a - x;
        int sum2 = b - y;

        if (sum1 < 0)
            c += sum1;
        if (sum2 < 0)
            c += sum2;

        if (c >= 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}