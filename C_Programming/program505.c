#include<stdio.h>

void Display()
{
    auto int i = 1 ;             // int is auto always 1 

    printf("Jay Ganeshh...%d\n",i); 
    i++;
    
    Display();   // Stack Overflow
}

int main()
{
    Display();
    
    return 0 ;
}