#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, size = 0, arr[1000] = {0}, first, second;
        cin >> a;
        while (a > 0)
        {
            arr[size] = a % 10;
            a = a / 10;

            size++;
        }

        first = arr[size - 1];
        second = arr[size - 2];

        sort(arr, arr + size);
        if (size <= 2)
        {
            if (size == 1)
                cout << arr[0] << endl;
            else if (size == 2)
                cout << second << endl;
        }
        else
            cout << arr[0] << endl;
    }

    return 0;
}