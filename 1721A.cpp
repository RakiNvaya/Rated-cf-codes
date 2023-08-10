#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string a, b;
        cin >> a >> b;

        int freq[150] = {0}, colour = 0;
        for(int i = 0;i<2;i++)
        {
            freq[a[i]]++;
            freq[b[i]]++;
        }

        for(int j = 'a';j<= 'z';j++)
        {
            if (freq[j] != 0)

                colour++;
        }

      if(colour == 1)
      cout<<"0"<<endl;
      else if (colour == 2)
      cout<<"1"<<endl;
      else if(colour == 3)
      cout<<"2"<<endl;
      else 
      cout<<"3"<<endl;
    }

    return 0;
}