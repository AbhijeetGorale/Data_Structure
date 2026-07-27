#include<iostream>
using namespace std ;

#pragma pack(1)
struct node
{
    int data ;
    struct node *next ;

};

class Stack
{
    private :
        struct node *first ;
        int iCount ;


    public :

        Stack();
        void push(int iNo) ;    // InsertFirst
        int pop();          // DeleteFirst
        int Peep();        // DeleteFirst
        void Display();
        int Count();

};

Stack :: Stack()
{
    this->first = NULL ;
    this->iCount = 0 ;
}
void Stack :: push(int iNo)
{
    struct node *newn = NULL;

    newn = new struct node();

    newn ->data = iNo ;
    newn -> next = NULL;

    newn -> next = first ;
    first = newn ;                                          
                                    
    iCount++;
} 
int Stack :: pop() 
{
    int iValue  = 0 ;
    struct node * temp = NULL ;

   if(first == NULL)
   {
    cout<<"Stack is empty\n";
    return -1 ;
   }
   else
   {
        iValue = first->data ;
        temp = first ;

        first = first -> next ;
        delete temp ;

        iCount-- ;
        return iValue ;
        
   }
}
int Stack :: Peep() 
{
    int iValue  = 0 ;

   if(first == NULL)
   {
    cout<<"Stack is empty\n";
    return -1 ;
   }
   else
   {
        iValue = first->data ;
        
        return iValue ;
        
   }
}       
void Stack :: Display()
{
    struct node *temp = NULL ;

    temp = first ;

    while(temp!= NULL)
    {
        cout<<"| "<<temp->data<<" |\n";
        temp =temp -> next ;
    }
}
int Stack ::  Count()
{
   return iCount ;  
}



int main()
{
    Stack sobj ;
    int iRet = 0 ;

    sobj.push(11);
    sobj.push(21);
    sobj.push(51);
    sobj.push(101);

    sobj.Display();
    iRet = sobj.Count();

    cout<<"Elements of the Stack are :"<<iRet<<"\n";

    iRet = sobj.pop();

    cout<<"popped element is :"<<iRet<<"\n";

    sobj.Display();
    iRet = sobj.Count();

    cout<<"Elements of the Stack are :"<<iRet<<"\n";

    iRet = sobj.Peep();

    cout<<"Peeped element is :"<<iRet<<"\n";

    sobj.Display();
    iRet = sobj.Count();

    cout<<"Elements of the Stack are :"<<iRet<<"\n";

    

    return 0 ;  
}