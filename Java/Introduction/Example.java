//Method Overloading

package Java.Introduction;

public class Example
{
    void add(int a,int b)
    {
        int sum=a+b;
        System.out.println("Sum="+sum);
    }
    void add(int a,int b,int c)
    {
        int sum=a+b+c;
        System.out.println("Sum="+sum);
    }
    void add(double a,double b)
    {
        double sum=a+b;
        System.out.println("Sum="+sum);
    }
    public static void main(String[] args)
    {
        Example e=new Example();
        e.add(10,20);
        e.add(10,20,30);
        e.add(1.2,3.5);
    }
}
