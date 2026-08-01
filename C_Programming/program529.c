// 4
// 4 * 3 * 2 * 1 = 24
// 5 * 4 * 3 * 2 * 1 = 

#include<stdio.h>

typedef unsigned long int ULONG ;    // unsigned long int 

ULONG Factorial(int iNo)
{
    ULONG iMult = 1;
    

    while(iNo != 0 )
    {
        iMult = iMult * iNo ;
        iNo--;

    }

    return iMult ;
}


int main()
{
    int iValue = 0 ;
    ULONG iRet = 0 ;

    printf("Enter Frequency :");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial is :%lu\n",iRet);

    return 0 ;
}