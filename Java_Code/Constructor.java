//Constructor->Special method to initialize the instance variables.
package Java_Code;

public class Constructor
{;
    int a,b,c;
    Constructor()
    {
        a=10;
        b=20;
        c=30;
    }
    void display()
    {
        System.out.println("a = "+a+"\nb = "+b+"\nc = "+c);
    }
    public static void main(String[] args)
    {
        Constructor c=new Constructor();
        c.display();
    }
}
