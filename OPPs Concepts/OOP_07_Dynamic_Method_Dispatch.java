class KeypadPhone
{
    public void call()
    {
        System.out.println("you can call using this phone");
    }
    public void message()
    {
        System.out.println("you can send message using this phone");
    }
    public void camera()
    {
        System.out.println(("you can click photoes using 2MP camera"));
    }
}

class SmartPhone extends KeypadPhone
{
    public void camera()
    {
        System.out.println("you can click photoes using 108MP camera");
    }
    public void internet()
    {
        System.out.println("you can use internet using this phone");
    }
}
public class OOP_07_Dynamic_Method_Dispatch {
    public static void main(String[] args) {
        KeypadPhone ob1=new KeypadPhone();
        ob1.camera();
        KeypadPhone ob2=new SmartPhone();
        ob2.camera();
        SmartPhone ob3=new SmartPhone();
        ob3.internet(); 
    }
}
