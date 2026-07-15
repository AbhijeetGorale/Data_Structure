#include<iostream>
using namespace std ;

#pragma pack(1)
struct node
{
    int data ;
    struct node * next ;
    struct node * prev ;  // $
};  

typedef struct node NODE ;
typedef struct node *PNODE ;

class DoublyLL
{
    private :
    PNODE first ;               
    int  iCount  = 0 ;

    public :
    DoublyLL ();
    void Display();
    int Count();
    void InsertFirst(int iNo);
    void InsertLast(int iNo);
    void InsertAtPos(int iNo,int iPos);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);


};

DoublyLL::DoublyLL ()    //class::constructor
{
    this->first = NULL;  
    this->iCount = 0;     
}

void DoublyLL  :: Display()
{
    cout<<"NULL|<=> ";

    PNODE temp = NULL ;
    temp = this->first ;

    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"|<=>";
        temp = temp ->next ;
    }
    cout<<"|NULL"<<endl ;
}

int DoublyLL :: Count()
{
    return this->iCount ;
}

void DoublyLL  :: InsertFirst(int iNo)
{
    PNODE newn =  NULL ;

    newn = new NODE ;

    newn->data = iNo ;
    newn ->next = NULL ;
    newn -> prev = NULL ;

    if(this -> first ==NULL)
    {
        this -> first = newn ;
    }
    else
    {
        newn -> next = this -> first ;
        this -> first -> prev = newn ;
        first = newn ;
    }
    this  -> iCount++ ;        
}
void DoublyLL  :: InsertLast(int iNo)
{
    PNODE newn =  NULL ;
    PNODE temp = first ;

    newn = new NODE ;

    newn->data = iNo ;
    newn ->next = NULL ;
    newn -> prev = NULL ;

    if(this -> first ==NULL)
    {
        this -> first = newn ;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp -> next ;
        }
        temp -> next = newn ;
        newn -> prev = temp ;
    }
    this  -> iCount++ ;
}
void  DoublyLL  :: InsertAtPos(int iNo,int iPos)
{
    int i = 0 ;
    PNODE temp = NULL ;
    PNODE newn = NULL ;

    if((iPos < 1) || (iPos > iCount + 1))
    {
        cout<<"Invalid Position\n";
        return ;
    }
    if(iPos == 1)
    {
        this -> InsertFirst(iNo);
    }
    else if ( iPos == iCount + 1)
    {
        this -> InsertLast(iNo);
    }
    else
    {
        newn = new NODE ;
        newn ->data = iNo ;
        newn -> next = NULL ;

        temp = this -> first ;

        for(i = 1 ; i< iPos -1 ; i++)
        {
            temp = temp -> next ;
        }

        newn -> next = temp -> next ;
        newn -> prev = temp;
        temp -> next -> prev = newn ;
        temp -> next = newn ;


        this -> iCount++ ;
    }
}
void  DoublyLL  :: DeleteFirst()
{
    if(this -> first == NULL)  
    {
        return;
    }
    else if(this -> first -> next == NULL)  
    {
        delete this -> first ;
        this -> first = NULL ;
    }
    else  
    {
        first = first -> next ;
        delete first -> prev ;
        first ->prev = NULL ;

    }

    this -> iCount-- ;
}
void DoublyLL  ::  DeleteLast()
{
    PNODE temp =  NULL ;

    if(this -> first == NULL)  
    {
        return;
    }
    else if(this -> first -> next == NULL) 
    {
        delete this -> first ;
        this -> first = NULL ;
    }
    else 
    {
        temp =  this ->first ;

        while(temp ->next -> next != NULL)
        {
            temp = temp -> next ;

        }

        delete temp ->next ;
        temp -> next = NULL ;
    }

    this -> iCount-- ; 
}

void DoublyLL::DeleteAtPos(int iPos)
{
    int i = 0 ;
    PNODE temp = NULL ;
    PNODE target = NULL ;

    if((iPos < 1) || (iPos > iCount ))
    {
        cout<<"Invalid Position\n";
        return ;
    }
    if(iPos == 1)
    {
        this -> DeleteFirst();
    }
    else if ( iPos == iCount )
    {
        this -> DeleteLast();
    }
    else
    {
        temp = this -> first ;

        for(i = 1 ; i< iPos -1 ; i++)
        {
            temp = temp -> next ;
        }

        target  = temp -> next ;

        temp -> next = target  -> next ;
        target -> next -> prev = temp ;
        
        delete(target) ;

        this -> iCount-- ;
    }
}


int main()
{
    int iRet = 0 ;
    DoublyLL dobj ;

    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);

    dobj.Display();

    iRet = dobj.Count();
    cout<<"Number of nodes are :"<<iRet<<endl;

    dobj.InsertLast(101);
    dobj.InsertLast(111);
    dobj.InsertLast(121);

    dobj.Display();

    iRet = dobj.Count();
    cout<<"Number of nodes are :"<<iRet<<endl;

    dobj.DeleteFirst();

    dobj.Display();

    iRet = dobj.Count();
    cout<<"Number of nodes are :"<<iRet<<endl;
    
    dobj.DeleteLast();

    dobj.Display();

    iRet = dobj.Count();
    cout<<"Number of nodes are :"<<iRet<<endl;

    dobj.InsertAtPos(71,3);

    dobj.Display();

    iRet = dobj.Count();
    cout<<"Number of nodes are :"<<iRet<<endl;

    dobj.DeleteAtPos(3);

    dobj.Display();

    iRet = dobj.Count();
    cout<<"Number of nodes are :"<<iRet<<endl;









    
    

    return 0 ;
}

