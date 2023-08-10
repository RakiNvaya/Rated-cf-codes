#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x, y, a, b, sum;
        cin >> x >> y;

        if (y % x == 0)
            cout << 1 << " " << y / x << endl;
        else
            cout << 0 << " " << 0 << endl;
    }
    return 0;
}