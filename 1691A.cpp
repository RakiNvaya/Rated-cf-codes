#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,add1=0,add2=0;
        cin>>a;
        int arr[a];
        for(int i = 0;i<a;i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0)
            add1++;
            else
            add2++;
        }
        if(add1 > add2)
        cout<<add2<<endl;
        else
        cout<<add1<<endl;
    }

    return 0;
}