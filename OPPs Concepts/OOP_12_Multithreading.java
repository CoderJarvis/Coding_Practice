class MyThread1 extends Thread
{
    public void run()
    {
        while(true)
        {
            System.out.println("11111111111111111");
        }
    }
}
class MyThread2 extends Thread
{
    public void run()
    {   
        while(true)
        {

            System.out.println("2222222");
        }
    }
}
public class OOP_12_Multithreading {
    public static void main(String[] args) {
        MyThread1 ob1=new MyThread1();
        MyThread2 ob2=new MyThread2();
        ob1.start();
        ob2.start();
    }
}
