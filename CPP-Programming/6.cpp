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
    private :
    PNODE first ;                // Head 
    int  iCount  = 0 ;

    public :
    SinglyLL ()
    {
        this->first = NULL;   //ERROR
        this->iCount = 0;     // ERROR
    }
};

int main()
{
    SinglyLL sobj ;
    
    sobj.first = NULL ;  // DrawBack
    sobj.iCount = 15 ;

    return 0 ;
}

