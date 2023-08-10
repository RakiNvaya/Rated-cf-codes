#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int n1;
        cin >> n1;
        int arr[n1], freq[200005] = {0}, pos = 0;
        for (int i = 0; i < n1; i++)
        {
            cin >> arr[i];
            freq[arr[i]]++;
        }

        for (int k = 0; k < n1; k++)
        {
            if (freq[arr[k]] >= 3)
            {
                pos = arr[k];
              
            }
        }

        if (pos != 0)
            cout << pos << endl;
        else
            cout << "-1" << endl;
    }
    return 0;
}