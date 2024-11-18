//Write a program to find even factorial of given number.

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0, iFactorial = 1;

    if(iNo <0)
    {
        iNo = -iNo;
    }

    for(iCnt =2; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
          iFactorial *= iCnt;
        }
        
    }
    return iFactorial;

}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even factorial of number is %d",iRet);

    return 0;
}