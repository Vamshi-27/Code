//Method Overloading
package Java_Code;
public class Method 
{
    void add(int a, int b)
    {
        int sum=a+b;
        System.out.println("Sum = "+sum);
    }
    void add(int a, int b, int c)
    {
        int sum=a+b+c;
        System.out.println("Sum = "+sum);
    }
    void add(double a,double b)
    {
        double sum=a+b;
        System.out.println("Sum = "+sum);
    }
    public static void main(String[] args)
    {
        Method obj=new Method();
        obj.add(10,20);
        obj.add(10,20,30);
        obj.add(1.414,1.732);
    }
}