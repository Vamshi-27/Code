//Multi-Threading program

class Square implements Runnable
{
    Thread t;
    int x;
    Square(int n)
    {
        x=n;
        t=new Thread(this,"Square");
        t.start();
    }
    public void run()
    {
        System.out.println("Square of "+x+" is "+(x*x));
    }
}

class Cube implements Runnable
{
    Thread t;
    int x;
    Cube(int n)
    {
        x=n;
        t=new Thread(this,"Cube");
        t.start();
    }
    public void run()
    {
        System.out.println("Cube of "+x+" is "+(x*x*x));
    }
}

public class Lab11 
{
    
}
