#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    string ch = "Timur";
    sort(ch.begin(), ch.end());

    while (n--)
    {
        int a;
        string s;
        cin >>a>> s;

        sort(s.begin(), s.end());

        if (ch == s)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}