#include<stdio.h>

void Display(int iNo)
{

    while(iNo != 0)
    {
        printf("Jay Ganeshh...\n");
        iNo--;
    }
    
}

int main()
{
    int iValue = 0 ;

    printf("Enter Frequency :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0 ;
}