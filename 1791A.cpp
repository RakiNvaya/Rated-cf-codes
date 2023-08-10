#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--)
        {
            string ch = "codeforces";
            char c;
            cin>>c;
            int flag = 0;
            for (int i = 0; ch[i] != '\0'; i++)
            {
                if (ch[i] == c)
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