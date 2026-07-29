#include<stdio.h>

void Display()
{
    static int i = 1 ;             // static storage class 

    printf("Jay Ganeshh...%d\n",i); 
    i++;
    
    Display();   // Stacl overflow
}

int main()
{
    Display();
    
    return 0 ;
}