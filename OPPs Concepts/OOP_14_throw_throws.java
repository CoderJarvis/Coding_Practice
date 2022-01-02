class Demo
{
    public int devide(int x,int y) throws ArithmeticException
    {
        if(y==0)
        {
            throw new ArithmeticException("can't be devided by zero");
        }
        else
        {
            return x/y;
        }
    }
}
public class OOP_14_throw_throws {
    public static void main(String[] args) {
        Demo ob=new Demo();
        int a=10,b=5;
        try
        {
            System.out.println("the result is "+ob.devide(a,b));
        }
        catch(ArithmeticException e)
        {
            System.out.println("you can't devide by 0");
        }
    }
}
