#include<stdio.h>

void Display()
{
    printf("Jay Ganeshh...\n"); 
    
    Display();   // Stack Overflow
}

int main()
{
    Display();
    
    return 0 ;
}