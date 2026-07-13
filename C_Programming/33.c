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
    while(first)  //while( first != NULL) type1
    {
        printf("| %d | -> ",first->data);
        first = first -> next;
    }
    printf("NULL");
}

int Count(PNODE first)   
{
    int iCount =0 ;

    while(first != NULL)  // type 1
    { 
        iCount++;
        first = first->next;
    }
    return iCount;;
}

void InsertFirst(PPNODE first, int ino)  
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn ->data = ino;
    newn ->next = NULL;

    if(NULL == *first)       // LL is Empty
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
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn ->data = ino;
    newn ->next = NULL;

    if(*first == NULL)       
    {
        *first  = newn ;
    }
    else                    
    {
        temp = *first ;  // 100

        while(temp ->next != NULL)
        {
            temp = temp ->next ;
        }
        temp ->next = newn ;
    }

}

void InsertAtPos(PPNODE first , int ino, int iPos)  
{
    int iCount = 0 ;
    int i = 0 ;

    PNODE newn = NULL ;
    PNODE temp = NULL ;

    iCount = Count(*first);
    
    if((iPos < 1) || (iPos > iCount +1))
    {
        printf("Invalid position\n");
        return ;
    }

    if(iPos == 1)
    {
        InsertFirst(first,ino);
    }
    else if(iPos = iCount + 1)
    {
        InsertLast(first,ino) ;
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn -> data = ino ;
        newn -> next = NULL;

        temp = *first ;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp -> next ;
        }

        newn -> next = temp -> next ;
        temp -> next = newn ;
    }
}

void DeleteFirst(PPNODE first)  
{
    PNODE temp = NULL;

    if(*first == NULL)                   // LL is Empty
    {
        return;
    }
    else if((*first) -> next == NULL)  // one node is there in LL
    {
        free(*first);
        *first = NULL;                //  req
    }
    else                               // LL contain more than 1 node
    {
        temp = *first ;
        *first = (*first)->next;
        free(temp);
    }
}

void DeleteLast(PPNODE first)  
{
    PNODE temp = NULL ;

    if(*first == NULL)   // LL is Empty
    {
        return;
    }
    else if((*first) -> next == NULL)  // one node is there in LL
    {
        free(*first);
        *first = NULL;               
    }
    else
    {
        temp = *first ;
        while(temp ->next -> next  != NULL)   // type 3
        {
            temp = temp->next ;
        }
        free(temp->next);
        temp->next = NULL ;
    }
}

void DeleteAtPos(PPNODE first,int iPos)  
{
    int iCount = 0 ;
    int i =0 ;

    PNODE temp = NULL ;
    iCount = Count(*first);
    
    if((iPos < 1) || (iPos > iCount))
    {
        printf("Invalid position\n");
        return ;
    }

    if(iPos == 1)
    {
        DeleteFirst(first);
    }
    else if(iPos = iCount)
    {
        DeleteLast(first) ;
    }
    else
    {
        temp = *first ;

        for(i = 1 ; i < iPos -1 ;i++)
        {
            temp = temp -> next ;
        }
    }
}


int main()
{
    PNODE head =  NULL;

    int iRet = 0 ;

    InsertFirst(&head,101);   
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);

    Display(head);

    iRet = Count(head);
    printf("\nNumber of Nodes Are :%d\n",iRet);

    InsertLast(&head,111);
    InsertLast(&head,121);

    Display(head);

    iRet = Count(head);
    printf("\nNumber of Nodes Are :%d\n",iRet);

    DeleteFirst(&head);

    Display(head);

    iRet = Count(head);
    printf("\nNumber of Nodes Are :%d\n",iRet);

    DeleteLast(&head);

    Display(head);

    iRet = Count(head);
    printf("\nNumber of Nodes Are :%d\n",iRet);

    InsertAtPos(&head,105,4);

    Display(head);

    iRet = Count(head);
    printf("\nNumber of Nodes Are :%d\n",iRet);

    return 0 ;
}
