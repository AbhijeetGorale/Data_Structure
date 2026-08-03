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
    if( first != NULL)
    {
        printf("| %d |->",first->data);
        first = first -> next;

        Display(first);
    }
}

int Count(PNODE first)   
{
    static int iCount =0 ;

    if(first != NULL)
    {
        iCount++;
        first = first->next;
        
        Count(first);
    }
    return iCount;
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




int main()
{
    PNODE head =  NULL;

    int iRet = 0 ;

    InsertFirst(&head,101);   // if
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);

    Display(head);

    iRet = Count(head);
    printf("Number of Nodes Are :%d\n",iRet);



    
    return 0 ;
}
