#include <bits/stdc++.h>
using namespace std;

void insert(int arr[], int size, int pos, int val)
{

    for (int i = size; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;

    size++;

    for (int k = 0; k < size; k++)
        cout << arr[k];

    cout << endl;

    // return arr[size];
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        int arr[a];

        for (int j = 0; j < a; j++)
            cin >> arr[j];

        for (int i = 0; i < a; i++)
        {

            if (arr[i] < b)
            {
                insert(arr, a, i, b);
                break;
            }
        }
    }
}
