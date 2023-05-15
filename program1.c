#include<stdio.h>
   void Display(int iNo)
{
    int iCNT=0;
    for(iCNT=1;iCNT<=iNo;iCNT++)
    {

        printf("*");
    }

}

int main()
{

int iValue=0;
printf("ENTER NUMBER OF STARS TO PRINT ON SCREEN :\n");
scanf("%d",&iValue);
Display(iValue);
return 0;
}
