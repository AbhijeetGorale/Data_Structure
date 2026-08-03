#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node **PPNODE;

// L D R
void InOrder(PNODE first)
{
    if(first != NULL)
    {
        InOrder(first -> lchild);
        printf("%d\n",first->data);

        InOrder(first -> rchild);
    }
}
// D L R
void PreOrder(PNODE first)
{
    if(first != NULL)
    {
        
        printf("%d\n",first->data);
         PreOrder(first -> lchild);
        PreOrder(first -> rchild);
       
    }
}

void PostOrder(PNODE first)
{
    if(first != NULL)
    {
        
        
        PostOrder(first -> lchild);
        PostOrder(first -> rchild);
        printf("%d\n",first->data);
       
    }
}



void Insert(PPNODE first, int iNo)
{
    PNODE temp = NULL ;
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = iNo ;
    newn -> lchild = NULL ;
    newn -> rchild = NULL ;

    if(*first == NULL)
    {
        *first = newn ;         // root for every time insertion
    }
    else
    {
        temp = *first ;

        while(1)
        {
            if(iNo > temp->data)
            {
                if(temp->rchild ==  NULL)
                {
                    temp -> rchild = newn ;
                    break;
                }

                temp = temp->rchild ;
            }
            else if(iNo < temp -> data)
            {
                if(temp->lchild == NULL)
                {
                    temp ->lchild = newn ;
                    break;
                }
                temp = temp->lchild;

            }
            else if (iNo == temp ->data)
            {
                printf("Unable to Insert as element is duplicate\n");
                free(newn);               
                break;                   //
            }


        }
    }
}


int main()
{
    PNODE head = NULL;

    Insert(&head,11);    // root 
    Insert(&head,5);
    Insert(&head,17);
    Insert(&head,5);

    printf("InOrder Display :\n");
    InOrder(head);

    printf("PreOrder Display :\n");
    PreOrder(head);

    printf("PostOrder Display :\n");
    PostOrder(head);
    

    



    return 0 ;
}