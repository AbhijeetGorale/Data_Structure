#include<iostream>
using namespace std ;

#pragma pack(1)
struct node
{
    int data ;
    struct node * next ;
};

typedef struct node NODE ;
typedef struct node *PNODE ;
typedef struct node **PPNODE ;

class SinglyLL
{
    public :
    PNODE first ;                // Head 
    int  iCount  = 0 ;

    SinglyLL ()
    {
        this->first = NULL; 
        this->iCount = 0;
    }
};

int main()
{
    SinglyLL sobj ;
    
    sobj.first = NULL ;  // DrawBack
    sobj.iCount = 15 ;

    return 0 ;
}

