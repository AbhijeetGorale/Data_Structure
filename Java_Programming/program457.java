class program457
{
    public static void main(String[] A)
    {
        SinglyLL sobj = new SinglyLL();
        int iRet = 0 ;
        
        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);

        sobj.InsertLast(101);
        sobj.InsertLast(111);
        sobj.InsertLast(121);

        sobj.Display();

        iRet  = sobj.Count();
        System.out.println("Number of node are  :"+iRet);

        sobj.DeleteFirst();
        sobj.DeleteLast();

        sobj.Display();

        iRet  = sobj.Count();
        System.out.println("Number of node are  :"+iRet);

        sobj.InsertAtPosition(105,4 );

        sobj.Display();

        iRet  = sobj.Count();
        System.out.println("Number of node are  :"+iRet);

     
        sobj.DeleteAtPos(4);

        sobj.Display();

        iRet  = sobj.Count();
        System.out.println("Number of node are  :"+iRet);
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
    {
        node temp = first ;

        while (temp != null)
        {
            System.out.print("| "+temp.data+" | -> ");
            temp = temp.next ;

        }
        System.out.println("null");
    }

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
            node temp = first ;
            while(temp.next != null)
            {
                temp = temp.next;
            }
            temp.next = newn ;
        }
        iCount++;
        
    }

    public void InsertAtPosition(int ino,int iPos)
    {
        node newn = null ;
        int i = 0 ;
        node temp = null ;

        if((iPos < 1) || (iPos > iCount+1))
        {
            return ;
        }
        
        if(iPos == 1)
        {
            InsertFirst(ino);
        }
        else if(iPos == iCount +1)
        {
            InsertLast(ino);
        }
        else
        {
            newn = new node(ino);
            temp =  first;

            for(i = 1; iPos < iCount - 1 ;i++)
            {
                temp = temp.next ;
            }

            newn.next = temp.next;
            temp.next = newn ;

            iCount++;
        }
        
    }

    public void DeleteFirst()
    {
        if(first == null)
        {
            return ;
        }
        else if(first.next == null)
        {
            first = null;
        }
        else
        {
            first = first.next ;
        }
        iCount--;
    }

    public void DeleteLast()
    {
        if(first == null)
        {
            return ;
        }
        else if(first.next == null)
        {
            first = null;
        }
        else
        {
            node temp = first ;

            while(temp.next.next != null)
            {
                temp = temp.next ;
            }
            temp.next = null ;
        }
        iCount--  ;
    }

    public void DeleteAtPos(int iPos)
    {
        
        int i = 0 ;
        node temp = null ;

        if((iPos < 1) || (iPos > iCount))
        {
            return ;
        }
        
        if(iPos == 1)
        {
            DeleteFirst();
        }
        else if(iPos == iCount )
        {
            DeleteLast();
        }
        else
        {
        
            temp =  first;

            for(i = 1; iPos < iCount - 1 ;i++)
            {
                temp = temp.next ;
            }

            temp.next = temp.next.next ;

            iCount--;
        }
    }

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



/*
------------------------------------------------------------------ --------------------
            Singly LL   SinglyCL    DoublyLL     DOUBLYCL         Stack      Queue
---------------------------------------------------------------------------------------
C           DONE         DONE        DONE          -DONE            
C++         DONE         DONE        DONE           DONE
JAVA        DONE        --          --              --
C++ Generic  --         --          --              -- 


*/