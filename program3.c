#include<stdio.h>
void Display(int iNo)

{
if(iNo<10)
{

    printf("Hello \n");
}
else{

    printf("Demo \n");
}



}


int main()
{
int iValue=0;
printf("ENTER NUMBER: \n");
scanf("%d",&iValue);
Display(iValue);
return 0;

}





















