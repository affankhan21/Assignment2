#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL CheckEven(int iNo)
{
if((iNo%2)==0)
{
   return 1;
}
else
{

    return 0;
}


}


int main()
{

int iValue=0;
BOOL bRet=FALSE;

printf("enter number  to check even or odd:\n ");
scanf("%d",&iValue);
 bRet=CheckEven(iValue);
if (bRet==1)
{
    printf("%d number is even",iValue);
}
else
{


 printf("%d number is odd",iValue);

}
}