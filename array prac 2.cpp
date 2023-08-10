#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
int main()
{
    int n,sum=0,avg,i;
    cout<<"Enter number of students:";
    cin>>n;
    int marks[n];
    for(i=0;i<n;i++)
    {
        cout<<"The mark of student no"<< i+1<<" = ";
        cin>>marks[i];
        sum=sum+marks[i];
        float avg=sum/ n;

    }
    cout<<"the total number is:"<<sum<<endl;
    cout<<"the average number is:"<<avg<<endl;
    //maximum minimum
    int max=marks[0];
    int min=marks[0];
    for(i=1;i<n;i++)
    {
        if(max<marks[i])
        {
            max=marks[i];
        }
        if(min>marks[i])
        {
            min=marks[i];
        }



    }
    cout<<"The max number is:"<<max<<endl;
    cout<<"The minimum number is:"<<min;
    getch();
}
