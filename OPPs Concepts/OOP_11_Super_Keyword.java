class Base
{
    public Base()
    {
        System.out.println("I am Base class's Default Constructor");
    }
    public Base(int x)
    {
        System.out.println("I am Base class's Parameterized Constructor");
    }
}
class Derived extends Base
{
    
    public Derived()
    {
        System.out.println("i am Derived class's Default Constructor");
    }
    public Derived(int x)
    {   
        super(x);
        System.out.println("i am Derived class's Parameterized Constructors");
    }
}
public class OOP_11_Super_Keyword {
    public static void main(String[] args) {
        // Base ob1=new Base(11);
        new Derived(11);

    }
}
