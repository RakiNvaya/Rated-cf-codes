
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int n1;
        cin >> n1;
        string ch;
        char b = 'a';
        cin >> ch;
     
        for (int i = 0; i < n1; i++)
        {
            if (ch[i] > b)
                b = ch[i];
        }

        int val = b - 'a' + 1;

        cout << val << endl;
    }

    return 0;
}