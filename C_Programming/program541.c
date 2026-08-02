// 
// 

#include<stdio.h>

void Display(int Arr[],int iSize)
{
    static int i = 0 ;

    if(i < iSize)
    {
        i++;
        Display(Arr,iSize);

        printf("%d\n",Arr[i]);    // issue as array is of 5 elements startss from 0 ->garbage 
 
    }
}


int main()
{
    int Brr[] = {10,20,30,40,50};

    Display(Brr,5);

    return 0 ;
}