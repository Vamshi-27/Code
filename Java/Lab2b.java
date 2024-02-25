//Bill(using if-else)

import java.util.Scanner;
public class Lab2b
{

    public static void main(String[] args)
    {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter the total cost:");
        double cost = s.nextDouble();
        if (cost < 2000)
            cost = cost-((5.0/100)*cost);
        else if (cost <= 5000)  
            cost = cost-((25.0/100)*cost);
        else if (cost <= 1000)
            cost = cost-((35.0/100)*cost);
        else
            cost = cost-((50.0/100)*cost);
        System.out.println("Total Amount to be paid " + cost);
        s.close();
    }
}



