
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int arr[4],front = 0;
        for (int i = 0; i < 4; i++)
            cin >> arr[i];

        for (int j = 1; j < 4; j++)
        {
            if (arr[0] < arr[j])
                front++;
        }

        cout << front << endl;
    }

    return 0;
}