#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, size = 0;
        
        string ch;
        cin >> a >> ch;
        a--;
        for (int i = 0; i <= a/2; i++)
        {
            if (ch[i] == '1' && ch[a - i] == '0' || ch[i] == '0' && ch[a - i] == '1')
                size++;
            else
                break;
        }

        cout << a-size*2 + 1<< endl;
    }

    return 0;
}