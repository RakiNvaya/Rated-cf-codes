#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int marks[5],i;

    //input
    for(int i=0;i<5;i++)
    {
        cout<<"Marks for student"<<i <<" =";
        cin>>marks[i];
    }
    cout<<"The marks are:";
    //output
    for(int i=0;i<5;i++)
    {
        cout<<marks[i]<<" ";
    }


    getch();
}
