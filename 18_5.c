//Write a program which returns difference between Even factorial and odd factorial of given number.

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0, iEvenFactorial =1, iOddFactorial = 1;


    for(iCnt =1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
           iEvenFactorial *= iCnt;
        }
        else
        {
            iOddFactorial *= iCnt;
        }
        
    }
    return iEvenFactorial - iOddFactorial;

}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);
    

    printf("factorial difference is %d",iRet);

    return 0;
}