// 
// 

#include<stdio.h>

int Addition(int Arr[],int iSize)
{
    static int i = 0 ;
    static int iSum = 0 ;

    if(i < iSize)
    {
        iSum= iSum + Arr[i];
        i++;

        Addition (Arr,iSize);
    }
    return iSum ;
}


int main()
{
    int iRet = 0 ;

    int Brr[] = {10,20,30,40,50};

    iRet = Addition(Brr,5);

    printf("Summation is :%d\n",iRet);

    return 0 ;
}