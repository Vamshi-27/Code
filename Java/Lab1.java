//Addition of two matrices(Command line argument)

import java.util.Scanner;

public class Lab1 
{
    public static void main(String[] args) 
    {
        int i, j;
        if (args.length == 0) 
        {
            System.out.println("Please enter the size of the array in the Command Line Argument");
            System.exit(0);
        }
        int n = Integer.parseInt(args[0]);
        int a[][] = new int[n][n];
        int b[][] = new int[n][n];
        int c[][] = new int[n][n];
        Scanner s = new Scanner(System.in);
        System.out.println("Enter the elements of Matrix A");
        for (i = 0; i < n; i++) 
        {
            for (j = 0; j < n; j++)
            {
                a[i][j] = s.nextInt();
            }
        }
        System.out.println("Enter the elements of Matrix B");
        for (i = 0; i < n; i++) 
        {
            for (j = 0; j < n; j++)
            {
                b[i][j] = s.nextInt();
            }
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                c[i][j] = a[i][j] + b[i][j];
            }
        }
        System.out.println("Resultant Matrix is:");
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                System.out.print(c[i][j] + " ");
            }
            System.out.println();
        }
    }
}
