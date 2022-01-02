class Student
{
    private int roll;
    private String name;

    public void setRoll(int x)
    {
        roll=x;
    }
    public void setName(String y)
    {
        name=y;
    }
    public int getRoll()
    {
        return roll;
    }
    public String getName()
    {
        return name;
    }
}
public class OOP_05_Encapsulation {
    public static void main(String[] args) {
        Student ob1=new Student();
        Student ob2=new Student();
        ob1.setRoll(10);
        ob1.setName("saswat");
        System.out.println(ob1.getName()+" "+ob1.getRoll());
        ob2.setRoll(20);
        ob2.setName("samay");
        System.out.println(ob2.getName()+" "+ob2.getRoll());
    }
}
