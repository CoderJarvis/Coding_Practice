public class OOP_13_Exception_try_catch {
    public static void main(String[] args) {
        int a=10,b=5;
        try
        {
            int c=a/b;
            System.out.println("the result is "+c);
        }
        catch(ArithmeticException e)
        {
            // System.out.println(e);
            System.out.println("you can't devide by 0");
        }
        int arr[]={11,22,33};
        try
        {
            System.out.println("array's 3rd element is "+arr[3]);
        }
        catch(ArrayIndexOutOfBoundsException e)
        {
            // System.out.println(e);
            System.out.println("you entered a wrong index");
        }
    }
}
