#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char s[100001],A;
 ;
    int count=0,add=0;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
         for(int i=0;i<n;i++)
         {

        if(s[i]=='A')
        {
            count++;
        }
        else
            {
                add++;
            }
         }

    if(add>count)
    {
        cout<<"Danik";
    }
    else if(add<count)
    {
        cout<<"Anton";
    }
    else
    {
        cout<<"Friendship";
    }
    return 0;
}
