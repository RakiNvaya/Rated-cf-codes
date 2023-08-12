#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],max = -1,min = INT_MAX,cnt = 0;
    
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i] > max)
       max = arr[i];
       if(arr[i] < min)
       min = arr[i];
    }

     for(int j = 0;j<n;j++)
     {
        if(arr[j] == max || arr[j] == min)
        cnt++;
     }

     cout<<n - cnt<<endl;

     return 0;


}