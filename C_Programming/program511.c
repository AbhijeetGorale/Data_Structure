#include<stdio.h>

void Display()
{
    static int i = 1 ;  // runs 4 times 

    if( i<= 4)   //Recurssion
    {
        printf("Jay Ganeshh...%d\n",i);
        i++;
        Display();
    }
    
}

int main()
{
    Display();

    return 0 ;
}