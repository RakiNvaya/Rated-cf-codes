#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        if (a == 3)
            cout << "NO" << endl;
        else
        {
             cout<<"YES"<<endl;
             if(a==2)
             cout << "25" << " " <<"-24"<<" ";
            else if(a%2!=0)         
            cout << "25" << " " <<"-24"<<" "<<"25"<<" "<<"-24"<<" "<<" -1"<<" ";
            else
             cout << "25" << " " <<"25"<<" "<<"25"<<" "<<"-25"<<" ";

            for (int i = 3; i <= a/2; i++)
            {
                cout << i << " " << i * -1 << " ";
            }
            cout<<endl;
        }

        
    }

    return 0;
}