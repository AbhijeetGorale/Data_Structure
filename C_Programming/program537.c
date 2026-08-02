// 22
// 4 

#include<stdio.h>

int Multiplication(int iNo)
{
    int iDigit = 0 ;
    static int iSum = 1;

    if(iNo != 0)
    {
        
        iDigit = iNo % 10 ;
        iSum = iSum * iDigit ;
        
        Summation(iNo / 10);
    }
    return iSum ;
}


int main()
{
    int iValue = 0 ;
    int iRet = 0 ;
    
    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = Multiplication(iValue);

    printf("multiplication is :%d\n",iRet);

    return 0 ;
}