#include<stdio.h>

void Display()
{
    static int i = 0 ;  // runs infinite 

    i = 1 ;   // issue reinitilisation 
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