#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string ch;
        char c;
        cin >> ch >> c;
        int flag = 0;

        int size = ch.size();
        for (int i = 0; i < size; i++)
        {
            if (ch[i] == c && i % 2 == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}