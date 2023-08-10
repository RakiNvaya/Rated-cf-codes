#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, max = 0, pos = -1;
        cin >> a;
        int arr[a], copy[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
            if (arr[i] > max)
            {
                max = arr[i];
                pos = i;
            }
            copy[i] = arr[i];
        }

        sort(copy, copy + a);

        for (int k = 0; k < a; k++)
        {
            if (arr[k] != max)
                cout << arr[k] - copy[a - 1] << " ";
            else
                cout << arr[k] - copy[a - 2] << " ";
        }
        cout << endl;
    }

    return 0;
}