#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string a, b, c;
        cin >> a;

        b = a;
        reverse(b.begin(), b.end());

        c = a + b;
        cout << c << endl;
    }
    return 0;
}