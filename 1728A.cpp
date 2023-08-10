#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, max = 0, pos = 0;
        cin >> a;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
            if (arr[i] > max)
            {
                max = arr[i];
                pos = i + 1;
            }
        }

        cout << pos << endl;
    }
}