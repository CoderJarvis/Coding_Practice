class Rectangle
{   
    public String name;
    public String getName()
    {   
        return name;
    }
}
public class OOP_01_Class__Object {
    public static void main(String[] args) {
        Rectangle ob1=new Rectangle();
        Rectangle ob2=new Rectangle();
        Rectangle ob3=new Rectangle();
        ob1.name="saswat kumar sk";
        System.out.println(ob1.getName());
        ob2.name="samay raina";
        System.out.println(ob2.getName());
        ob3.name="vidit gujurati";
        System.out.println(ob3.getName());
    }
}
