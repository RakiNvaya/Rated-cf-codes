#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string ch, comp = "YES";

        cin >> ch;

        for (int i = 0; i < 3; i++)

            ch[i] = toupper(ch[i]);

      if (ch[0] == comp[0] && ch[1] == comp[1] && ch[2] == comp[2])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}