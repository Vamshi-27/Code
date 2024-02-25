//Multi-Threading program

import java.util.Random;

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

class Generate implements Runnable
{
    Thread t;
    Generate()
    {
        t = new Thread(this, "Generate");
        t.start();
    }

    public void run()
    {
        int n;
        Random r = new Random();
        for(int i=0;i<5;i++)      //Can use while loop
        {
            n=r.nextInt(100);
            System.out.println("Generated number is "+n);
            new Square(n);        // Square s=new Square(n);
            new Cube(n);          // Cube c=new Cube(n);
            try
            {
                Thread.sleep(1000);
            }
            catch(Exception e)
            {
                System.out.println(e.getMessage());
            }
        }
    }
}

public class Lab11 
{
    public static void main(String[] args) 
    {
       new Generate();        //Generate g=new Generate();
    } 
}
