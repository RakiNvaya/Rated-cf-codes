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
        int arr[a], freq[101] = {0}, sum = 0;
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
            freq[arr[i]]++;
        }

        sum += freq[1] / 2 + freq[1] % 2;

        for (int k = 2; k <= 100; k++)
        {
            if (freq[k] != 0)
            {
                sum += freq[k];
            }
        }

        cout << sum << endl;
    }
    return 0;
}