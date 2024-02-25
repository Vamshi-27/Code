//Exception Handling

import java.util.Scanner;

class PException extends Exception
{
    PException(String msg)
    {
        super(msg);
    }
}
public class Lab9
{
    static void divide(double a, double b) throws PException
    {
        if(b==0)
        {
            throw new PException("Divide by zero is not possible");
        }
        double c=a/b;
        System.out.println("c = "+c);
    }
    public static void main(String[] args) 
    {
        Scanner s=new Scanner(System.in);
        System.out.print("Enter the num and den:");
        double num=s.nextDouble();
        double den=s.nextDouble();

        try
        {
            divide(num,den);
        }
        catch(PException e)
        {
            System.out.println(e.getMessage());
        }
        finally
        {
            System.out.println("This is finally method");
        }
        s.close();
    }
}
