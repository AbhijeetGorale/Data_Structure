class program453
{
    public static void main(String[] A)
    {
        SinglyLL sobj = new SinglyLL();
        
        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);


    }
}

class SinglyLL
{
    private node first ;
    private int iCount ;

    public SinglyLL()
    {
        System.out.println("Inside Constructor");
        this.first  = null ;
        this.iCount = 0 ;

    }

    public void Display()
    {}

    public int Count()
    {
        return iCount ;
    }


    public void InsertFirst(int ino)
    {
        node newn = new node(ino) ;

        if(first == null)
        {
            first = newn ;
        }
        else
        {
            newn.next = first ;
            first = newn ;
        }
        iCount++;
        
    }

    public void InsertLast(int ino)
    {
        node newn = new node(ino) ;

        if(first == null)
        {
            first = newn ;
        }
        else
        {
             
        }
        iCount++;
        
    }

    public void InsertAtPosition(int ino,int iPos)
    {}

    public void DeleteFirst()
    {}

    public void DeleteLast()
    {}

    public void DeleteAtPos(int iPos)
    {}

}
class node
{
    public int data ;
    public node next ;

    node(int no)
    {
        this.data = no ;
        this.next = null ;
    }

}



