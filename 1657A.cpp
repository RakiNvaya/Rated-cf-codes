#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int a, b;
        scanf("%d%d", &a, &b);

        double c, d;
        c = a, d = b;

        double sum1 = sqrt(c * c + d * d);
        int sum2 = sum1;
        if (a == 0 && b == 0)
            printf("0\n");
        else if (sum1 - sum2 == 0)
            printf("1\n");
        else
            printf("2\n");
    }
    return 0;
}