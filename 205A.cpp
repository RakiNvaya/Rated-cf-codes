#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, val = 0, pos = -1;
    cin >> n;
    int arr[n], copy[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        copy[i] = arr[i];
    }

    sort(arr, arr + n);

    if (n==1 || arr[0] != arr[1])
        val = arr[0];
    

    for (int x = 0; x < n; x++)
    {
        if (copy[x] == val)
            pos = x;
    }
   

    if (pos != -1)
        cout << pos+1 << endl;
    else
        cout << "Still Rozdil" << endl;

    return 0;
}