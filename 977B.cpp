#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string ch;
    cin >> ch;

    int count = 0, cnt = 0, pos = 0, pos1 = 0;

    for (int i = 0; i < n - 1; i++)
    {
        count = 0;

        for (int k = i+1 ; k < n - 1; k++)
        {
            if (ch[i] == ch[k] && ch[i + 1] == ch[k + 1])
            {
                count++;
                pos1 = i;
            }
           
        }

          if (count > cnt)
            {

               cnt = count;
               pos = pos1;
              
            }
    }

 
    cout << ch[pos] << ch[pos + 1] << endl;
   


    return 0;
}
