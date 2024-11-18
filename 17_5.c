//Write a program which accepts N and print first 5 multiples of N.
#include<stdio.h>

void MultiDisplay(int iNo)
{
    int iCnt = 0;
       
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        
        printf("%d\t",iCnt*iNo);  
    }
 }


int main()
{
    int iValue = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    MultiDisplay(iValue);


    return 0;
}