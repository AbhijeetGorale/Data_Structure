#include<stdio.h>

void Display()
{
    auto int i = 0 ;  // infinite run 

    i = 1 ;
    if( i<= 4)   //Recurssion
    {
        printf("Jay Ganeshh...\n");
        i++;
        Display();
    }
    
}

int main()
{
    Display();

    return 0 ;
}