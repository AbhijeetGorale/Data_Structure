#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

struct node 
{
    int data ;
    struct node  *next ;

};

typedef struct node NODE ;
typedef struct node* PNODE ;
typedef struct node** PPNODE ;

void Display(PNODE first)  // call by value
{

}

int Count(PNODE first)   // call by value
{
    return 0;
}

void InsertFirst(PPNODE first, int ino)  // call by address
{

}

void InsertLast(PPNODE first, int ino)  // call by address
{

}

void InsertAtPos(PPNODE first , int ino, int iPos)  // call by address
{

}

void DeleteFirst(PPNODE first)  // call by address
{

}

void DeleteLast(PPNODE first)  // call by address
{
    
}

void DeleteAtPos(PPNODE first,int iPos)  // call by address
{
    
}


int main()
{
    PNODE head =  NULL;


    
    return 0 ;
}
