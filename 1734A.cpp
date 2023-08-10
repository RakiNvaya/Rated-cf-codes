#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int a,val = 0,min =  INT_MAX;
        cin >> a;
        int arr[a];
       
        for (int j = 0; j < a; j++)

            cin >> arr[j];

        sort(arr, arr + a);
        for(int i = 0;i<a - 2;i++)
        {
            val = arr[i+1] - arr[i] + arr[i+2] - arr[i+1];
            if(val < min)
                min = val;
            
        }

        cout << min << endl;
    }

    return 0;
}