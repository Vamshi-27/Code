//Staff Details

import java.util.Scanner;

class Staff
{
    Scanner s = new Scanner(System.in);
    String sid,name;
    int phno;
    double salary;

    void read()
    {
        System.out.println("Enter ID,Name,Phone Number and Salary");
        sid = s.next();
        name = s.next();
        phno = s.nextInt();
        salary = s.nextDouble();
    }

    void display()
    {
        System.out.print(sid + "\t" + name + "\t" + phno + "\t" + salary + "\t");
    }
}

class Teaching extends Staff
{
    String domain,pub;
    void read()
    {
        super.read();
        System.out.println("Enter domain and publication:");
        domain = s.nextLine();
        pub = s.nextLine();
    }
    void display()
    {
        super.display();
        System.out.println(domain + "\t" + pub + "\t");
    }
}

class Technical extends Staff
{
    String skill;
    void read()
    {
        super.read();
        System.out.println("Enter the skill:");
        skill=s.nextLine();
    }
    void display()
    {
        super.display();
        System.out.println(skill + "\t");
    }
}

class Contract extends Staff
{
    String period;
    void read()
    {
        super.read();
        System.out.println("Enter the period:");
        period=s.nextLine();
    }
    void display()
    {
        super.display();
        System.out.println(period + "\t");
    }
}

public class Lab5 
{
    public static void main(String[] args)
    {
        Teaching t = new Teaching();
        t.read();
        System.out.println("Teaching Staff Details:");
        System.out.println("ID\tName\tPhone_Number\tSalary\tDomain\tPublication");
        t.display();

        Technical th=new Technical();
        th.read();
        System.out.println("Technical Staff Details:");
        System.out.println("ID\tName\tPhone_Number\tSalary\tSkill");
        th.display();

        Contract c=new Contract();
        c.read();
        System.out.println("Contract Staff Details:");
        System.out.println("ID\tName\tPhone_Number\tSalary\tPeriod");
        c.display();
    }
}