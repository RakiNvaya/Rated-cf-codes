#include<iostream>
#include<conio.h>
using namespace std;
 void displayarray(int num[], int size)
{
    for(int i=0;i<5;i++)
        cout<<num[i]<<" ";

}
int main()
{
    int i;
int number[5]={12,54,234,76,34};
    displayarray(number,5);
    getch();
}
