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

void Display(PNODE first) 
{
    while( first != NULL)
    {
        printf("%d\t",first->data);
        first = first -> next;
    }
    printf("\n");
}

int Count(PNODE first)   
{
    return 0;
}

void InsertFirst(PPNODE first, int ino)  
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn ->data = ino;
    newn ->next = NULL;

    if(*first == NULL)       // LL is empty
    {
        *first  = newn ;
    }
    else                    // LL contains atleast one node
    {
        newn ->next = *first ;
        *first = newn ;
    }
}

void InsertLast(PPNODE first, int ino)  
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn ->data = ino;
    newn ->next = NULL;

    if(*first == NULL)       
    {
        *first  = newn ;
    }
    else                    
    {
        
    }

}

void InsertAtPos(PPNODE first , int ino, int iPos)  
{

}

void DeleteFirst(PPNODE first)  
{

}

void DeleteLast(PPNODE first)  
{
    
}

void DeleteAtPos(PPNODE first,int iPos)  
{
    
}


int main()
{
    PNODE head =  NULL;

    InsertFirst(&head,101);   // if
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);

    Display(head);



    
    return 0 ;
}
