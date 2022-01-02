class KeypadPhone
{   
    private String company;
    private String model;

    void call()
    {   
        System.out.println("this phone can call");
    }
    void message()
    {   
        System.out.println("this phone can send message");
    }
    void Offlinegame()
    {   
        System.out.println("you can play only snake game using this phone");
    }

}

class SmartPhone extends KeypadPhone
{
    private int IMEI_No;

    public void camera()
    {   
        System.out.println("this phone can click photoes and record videos");
    }
    public void internet()
    {   
        System.out.println("you can use internet using this phone");
    }
    public void onlineGame()
    {   
        System.out.println("you can play pubg using this phone");
    }
    
};
public class OOP_02_Inheritence {
    public static void main(String[] args) {
        KeypadPhone ob1=new KeypadPhone();
        SmartPhone ob2=new SmartPhone();;
        ob1.call();
        ob1.message();
        ob2.call();
    
        ob2.Offlinegame();
        ob2.internet();
        ob2.onlineGame();
    }
}
