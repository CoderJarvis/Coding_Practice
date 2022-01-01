interface SmartPhone
{
    void call();
    void message();
    void internet();
    void game();
    void gps();
    void bluetooth();
    void wifi();
    void camera();
}

class Samsung implements SmartPhone
{
    public void call()
    {
        System.out.println("you can call using this phone");
    }
    public void message()
    {
        System.out.println("you can send messages using this phone");
    }
    public void internet()
    {
        System.out.println("you can use internet using this phone");
    }
    public void game()
    {
        System.out.println("you can play games using this phone");
    }
    public void gps()
    {
        System.out.println("you can use gps feature in this phone");
    }
    public void bluetooth()
    {
        System.out.println("you can use bluetooth in this phone");
    }
    public void wifi()
    {
        System.out.println("you can use wifi in this phone");;
    }
    public void camera()
    {
        System.out.println("you can use camera in this phone");
    }
}
public class OOP_08_Interface {

    public static void main(String[] args) {
        Samsung ob=new Samsung();
        ob.call();
    }
}
