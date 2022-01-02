abstract class KeypadPhone
{
    abstract void call();
    abstract void message();
    public void display()
    {
        System.out.println("this phone has a display");
    }
}
class SmartPhone extends KeypadPhone
{
    public void call()
    {
        System.out.println("this phone can call");
    }
    public void message()
    {
        System.out.println("this phone can message");
    }
    public void internet()
    {
        System.out.println("you can use internet using this phone");
    }
    public void game()
    {
        System.out.println("you can play pubg using this phone");
    }
}
public class OOP_08_Abstract_Class {
    public static void main(String[] args) {
        SmartPhone ob=new SmartPhone();
        ob.call();
        ob.game();
        ob.internet();
        ob.display();
    }
}
