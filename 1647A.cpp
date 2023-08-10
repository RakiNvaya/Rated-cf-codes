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
        int sum = 0, k , add = 0;
        int arr[] = {},size = 0;
      
        if(a%3 == 1)
        k = 2;
        else 
        k = 1;
        while (sum < a)
        {
          int size = 0;
            if (k == 1)
                add = 2;
            else if (k == 2)
                add = 1;

            if (sum + add <= a)
            {
                cout<<add;
                size++;
                sum += add;
                k = add;
            }
        }
        cout<<endl;
    }
    return 0;
}