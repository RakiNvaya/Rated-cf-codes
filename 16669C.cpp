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
        int arr[a], add = 0;

        for (int i = 0; i < a; i++)
            cin >> arr[i];

        if (arr[0] % 2 != 0)
            for (int x = 0; x < a; x += 2)
                arr[x] += 1;

        if (arr[1] % 2 != 0)
            for (int y = 1; y < a; y += 2)
                arr[y] += 1;

        for (int m = 0; m < a; m++)
            if (arr[m] % 2 == 0)
                add++;

        if (add == a)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
