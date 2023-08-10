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
        int arr[a], copy[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
            copy[i] = arr[i];
        }

        sort(copy, copy + a);
        int min = 0,j;

        for ( j = 0; j < a; j++)
        {
            if (arr[j] + copy[j] >= min)
            {
                min = arr[j] + copy[j];
                continue;
            }
            else
            {
                swap(copy[j], copy[j + 1]);
                j--;
                    
            }
        }

        for (int k = 0; k < a; k++)
            cout << copy[k] << " ";
    }

    return 0;
}