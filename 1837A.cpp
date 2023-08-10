#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x, y;
        cin >> x >> y;

       if(x%y != 0)
       cout<<"1\n"<<x<<endl;
       else 
       cout<<"2\n"<<"1 "<<x-1<<endl;
    }

    return 0;
}