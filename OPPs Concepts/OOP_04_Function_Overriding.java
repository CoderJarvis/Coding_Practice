class KeypadPhone
{ 
    public void camera()
    {
        System.out.println("this phone has 2mp camera");
    }
    public void game()
    {   
        System.out.println("you can play only snake game using this phone");
    }
    public void message()
    {   
        System.out.println("this phone can only send message");
    }
}

class SmartPhone extends KeypadPhone
{
    public void camera()
    {
        System.out.println("this phone has 108mp camera");
    }
    public void game()
    {
        System.out.println("you can play pubg, cod etc. using this phone");
    }
    public void message()
    {
        System.out.println("you can send message as well as send mms using this phone");
    }
};
public class OOP_04_Function_Overriding {
    public static void main(String[] args) {
        KeypadPhone ob1=new KeypadPhone();
        SmartPhone ob2=new SmartPhone();
        ob1.camera();
        ob1.game();
        ob2.game();
        ob2.message();
        ob2.camera();
    }
}
