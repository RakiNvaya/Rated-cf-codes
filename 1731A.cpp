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

        int arr[a];
        long long  max = 1;

        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];

            max *= arr[i];
        }
       long long multi = 2022 * (max + a - 1);

        cout << multi << endl;
    }
    return 0;
}