#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string x, y;
        int count1 = 0, count2 = 0, size;
        cin >> size;
        cin >> x >> y;

        for (int i = 0; i < size; i++)
        {
            if (x[i] == y[i] || x[i] == 'G' && y[i] == 'B' || x[i] == 'B' && y[i] == 'G')
                count1++;
        }
        if (count1 == size)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}