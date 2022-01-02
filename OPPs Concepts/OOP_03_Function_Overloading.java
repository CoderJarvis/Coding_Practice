class Sum
{   
    public int checkSum(int a,int b)
    {
        return a+b;
    }
    public int checkSum(int a,int b,int c)
    {
        return a+b+c;
    }
    public int checkSum(int a,int b,int c,int d)
    {
        return a+b+c+d;
    }
};
public class OOP_03_Function_Overloading {
    public static void main(String[] args) {
        Sum ob=new Sum();
        System.out.println(ob.checkSum(11,22));
        System.out.println(ob.checkSum(11,22,33));
        System.out.println(ob.checkSum(11,22,33,44));
    }
}
