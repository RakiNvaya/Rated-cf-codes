
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        int n, m,x,y;
        cin >> n >> m;

        for(int i = 0;i<m;i++)
        cin>>x>>y;

        if (m < n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

       
    }
     return 0;
}