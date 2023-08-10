#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a = -1, b, cnt = 1, cnt1 = 1;
    cin >> n;
   
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        if (b >= a)
        {
            cnt++;
            a = b;
        }
        else if(cnt >= cnt1)
        {
            cnt1 = cnt;
            cnt = 1;
            a = -1;
        }
    }

    if (cnt1 > cnt)
        cout << cnt1 << endl;
    else
        cout << cnt << endl;

    return 0;
}