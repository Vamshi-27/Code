//Employee details

import java.util.Scanner;

class Employee
{
    String eid, name;
    double salary;

    void read() 
    {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter ID,Name and Salary");
        eid = s.next();
        name = s.next();
        salary = s.nextDouble();
        s.close();
    }


    void display() 
    {
        System.out.println(eid + "\t" + name + "\t" + salary);
    }


    void raiseSalary(double per)
    {
        salary = salary + (per / 100) * salary;
    }

}

public class Lab3
{
    public static void main(String[] args)
    {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter the number of employees:");
        int n = s.nextInt();
        Employee e[] = new Employee[n];
        for (int i = 0; i < n; i++) 
        {
            e[i] = new Employee();
            e[i].read();
        }
        System.out.println("Emp ID\tEmp Name\tEmp Salary\n");
        for (int i = 0; i < n; i++)
        {
            e[i].display();
        }
        System.out.println("Enter percentage:");
        double p = s.nextDouble();
        for (int i = 0; i < n; i++)
        {
            e[i].raiseSalary(p);
        }
        System.out.println("ID\tName\tSalary");
        for (int i = 0; i < n; i++)
        {
            e[i].display();
        }
        s.close();
    }
}
