#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
    int a, b, c;
    double  min = 0, max = 0;
    cin >> a >> b;

    for (int i = 0; i < a; i++)
    {
        cin >> c;
        double d = c;

        min += d / b;
        max += ceil(d / b);
    }

    

    cout <<min<< " " << max << endl;

    }

    return 0;
}