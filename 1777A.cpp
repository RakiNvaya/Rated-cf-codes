#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, sum1 = 0, sum2 = 0;
        ;
        cin >> a;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
            
            if (i % 2 == 0 && arr[i] % 2 == 0 || i % 2 != 0 && arr[i] % 2 != 0)
                sum1++;
            if (i % 2 == 0 && arr[i] % 2 != 0 || i % 2 != 0 &&  arr[i] % 2 == 0)
                sum2++;
        }

        if (sum1 < sum2)
            cout << sum1 << endl;
        else
            cout << sum2 << endl;
    }

    return 0;
}