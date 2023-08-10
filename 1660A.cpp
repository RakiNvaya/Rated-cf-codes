#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if (a == 0)
        {
            cout << "1" << endl;
            continue;
        }
        else
        {
            int sum = a + b * 2 + 1;
            cout << sum << endl;
        }
    }
    return 0;
}