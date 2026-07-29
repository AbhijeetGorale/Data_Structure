#include<stdio.h>

void Display(int iNo)
{
       

    if(iNo != 0)   
    {
        printf("Jay Ganeshh...%d\n",iNo);
        
        Display(iNo-1); 
    }
    
}

int main()
{
    int iValue = 0 ;

    printf("Enter Frequency :");
    scanf("%d",&iValue);

    Display(iValue);

    printf("End of main\n");

    return 0 ;
}