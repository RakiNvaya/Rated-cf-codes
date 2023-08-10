
#include <bits/stdc++.h>
using namespace std;

int sizee(int x)
{
    int size = 0;
    while (x != 0)
    {
        x = x / 10;
        size++;
    }

    return size;
}

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int a;
        cin >> a;

        int size = sizee(a);

        int num = a - pow(10, size - 1);
        cout << num << endl;
    }

    return 0;
}