//Nested class and Inner class

class Outer 
{
    private int x = 10;

    class Inner
    {
        private int y = 20;
        void display()
        {
            System.out.println("Inner class method");
            System.out.println("Value of y = " + y);
        }
    }
    void display()
    {
        System.out.println("Outer class method");
        Inner i=new Inner();
        System.out.println("x="+x+"\ny="+i.y);
    }
}
public class Lab8
{
    public static void main(String[] args) 
    {
        Outer o=new Outer();
        Outer.Inner obj=o.new Inner();
        o.display();
        obj.display();
    }
}
