//Simple Calculator(using switch case)

import java.util.Scanner;
public class Lab2a
{
    public static void main(String[] args) 
    {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter two numbers:");
        int a = s.nextInt();
        int b = s.nextInt();
        System.out.println("Enter the operator to perform the operation:");
        char op=s.next().charAt(0);
        int c=0;
        switch(op)
        {
            case '+':
                c=a+b;
                break;
            case '-':
                c=a-b;
                break;
            case '*':
                c=a*b;
                break;
            case '/':
                if(b!=0)
                    c=a/b;
                else
                {
                    System.out.println("Division by zero is not possible");
                    System.exit(0);
                }
                break;
            default:
                System.out.println("Invalid operator");
                System.exit(0);
        }
        System.out.println("Result:"+a+op+b+"="+c);
        s.close();
    }
}
