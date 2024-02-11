//Using for-each loop

package Java.Lab;
import java.util.Scanner;

public class Sum
{
    public static void main(String[] args)
    {
        Scanner s=new Scanner(System.in);
        int sum=0,count=0;
        int a[]=new int[10];
        System.out.println("Enter the array size should be more than 5:");
        int n=s.nextInt();
        System.out.println("Enter the array elements:");
        for(int i=0;i<n;i++)
        {
            a[i]=s.nextInt();
        }
        for(int x:a)
        {
            sum += x;
            count++;
            if(count==4)
                break;
        }
        System.out.println("Sum of first four elements in the array = "+sum);
        s.close();              //Closing the Scanner Class
    }
}
