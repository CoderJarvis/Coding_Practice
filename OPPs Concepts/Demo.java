import java.util.*;
class Student
{
	private int roll;
	private String name;
	
	public Student()
	{
		roll=0;
		name="undefined";
	}
	public void  setName(String name)
	{
		this.name=name;
	}

	public String getName()
	{
		return name;
	}
}
//class KeypadPhone
	//public int getRoll()
//interface SmartPhone
	//abstract void internet();
//abstract class KeypadPhone
	//abstract void call();
//class SmartPhone extends KeypadPhone
//class Samsung implements SmartPhone
//
public class Demo
{
	public static void main(String arg[])
	{
		System.out.println("Heloo world");
		Scanner sc=new Scanner(System.in);
		System.out.println("enter a integer number");		
		int n=sc.nextInt();
		System.out.println("the integer number is "+n);	
	//	float f=sc.nextFloat();
	//	char c=sc.next().charAt(0);
	//	System.out.println("enter a string");
	//	sc.nextLine();	//*imp*
	//	String s=sc.nextLine();
	//	System.out.println("the entered string is ->"+s);
		
		int arr[]={1,2,3,4,5};
		String st="Saswat kumar panda";
		
		Student ob=new Student();
		ob.setName("sasawt kumar sk");
		System.out.println("the name is "+ob.getName()+" & this is me");
		System.out.println("my real name is ->"+st);
	}
}