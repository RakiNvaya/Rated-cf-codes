#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,k,add = 0;;
        cin>>a>>k;

        int arr[a];
        for(int i = 0;i<a;i++)
        cin>>arr[i];

        for(int m = 0;m<a;m++)
        for(int n = m+1;n<a;n++)
        {
            if(arr[m] > arr[n])
            {
                swap(arr[m],arr[n]);
                add++;
            }
        }

        cout<<add<<endl;
    }
}