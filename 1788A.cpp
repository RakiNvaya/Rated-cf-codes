#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
     
     while(n--)
     {
        int a;
        cin >> a;
        int arr[a];
        for(int i = 0;i<a;i++)
        cin >> arr[i];

        int m = 0,n = 1,sum1 = 0,sum2 = 0;

        for(m;m<n;m++)
        sum1 *= arr[m];

        for(n;n<a;n++)
        sum2 *= arr[n];


     }
}