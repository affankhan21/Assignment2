#include<stdio.h>

 void Display(int iNo,int iFrequency)
 {


    int i=0;
    for(i=1;i<=iFrequency;i++)
    {

        printf("%d\n",iNo);
    }
 }

int main()
{
int iValue = 0;
int iCount=0;
printf("enter number:\n");
scanf("%d",&iValue);

printf("enter frequency:\n");
scanf("%d",&iCount);

Display(iValue,iCount);
return 0;
}