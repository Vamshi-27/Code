//Producer-Consumer Problem

class Buffer
{
    int i;
    int flag=0;
    synchronized void put(int x)
    {
        try
        {
            if(flag==1)
                wait();
        }
        catch(Exception e)
        {
            System.out.println("Producer thread has to wait");
        }
        i=x;
        System.out.println("Produced="+i);
        flag=1;
        notify();
    }
    synchronized void get()
    {
        try
        {
            if(flag==0)
                wait();
        }
        catch(Exception e)
        {
            System.out.println("Consumer thread has to wait");
        }
        System.out.println("Consumed="+i);
        flag=0;
        notify();
        
    }
}
class Producer implements Runnable
{
    Buffer ob;
    Thread t;
    Producer(Buffer obj)
    {
        ob=obj;
        t=new Thread(this,"Producer");
        t.start();
    }
    public void run()
    {
        int i=0;
        while(true)
        {
            ob.put(i++);
        }
    }
}

class Consumer implements Runnable
{
    Buffer ob;
    Thread t;
    Consumer(Buffer obj)
    {
        ob=obj;
        t=new Thread(this,"Consumer");
        t.start();
    }
    public void run()
    {
        while(true)
        {
            ob.get();
        }
    }
}

public class Lab12
{
    public static void main(String[] args) 
    {
        Buffer b=new Buffer();
        new Producer(b);        //Producer p=new Producer(b);
        new Consumer(b);        //Consumer c=new Consumer(b);
    }
}
