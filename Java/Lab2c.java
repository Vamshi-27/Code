//Sum of first four elements in the array(using for each loop)

import java.util.Scanner;
public class Lab2c
{
    public static void main(String[] args)
    {
        Scanner s = new Scanner(System.in);
        int sum = 0, count = 0;
        int a[] = new int[10];
        System.out.println("Enter the array elements:");
        for (int i = 0; i < 10; i++)
        {
            a[i] = s.nextInt();
        }
        for (int x : a)
        {
            sum += x;
            count++;
            if (count == 4)
                break;
        }
        System.out.println("Sum of first four elements in the array is " + sum);
        s.close();
    }
}
