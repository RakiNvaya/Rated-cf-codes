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
        long long sum1 = 0, sum2 = 0;

        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
            if (arr[i] > 0)
                sum1 += arr[i];
            else
                sum2 += arr[i];
        }

        sum1 = abs(sum1);
        sum2 = abs(sum2);

        if (sum1 > sum2)
            cout << sum1 - sum2 << endl;
        else
            cout << sum2 - sum1 << endl;
    }

    return 0;
}