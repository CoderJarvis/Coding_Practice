class Student
{
    int roll;
    String name;

    public Student(int roll,String name)
    {
        this.roll=roll;
        this.name=name;
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
public class OOP_10_Constructor_This_Keyword {
    public static void main(String[] args) {
        Student ob1=new Student(10,"saswat sk");
        System.out.println(ob1.getName()+" "+ob1.getRoll());
        Student ob2=new Student(11,"samay");
        System.out.println(ob2.getName()+" "+ob2.getRoll());
    }
}
