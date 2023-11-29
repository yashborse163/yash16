
class base
{
    public int A,B;
    public based()
    {
        System.out.println("base constructor");
    }
}
public void fun()
{
    System.out.println("derived fun");
}
class derived extends base
{
        public int x,y;
        public derived()
        {
            System.out.println("derived constructor");
        }
}
public void gun()
{
    System.out.println("derived gun");
}

class single
{
    public static void main(String arg[])
    {
        derived dobj = new derived();
        dobj.fun();
        dobj.gun();

    }
}


