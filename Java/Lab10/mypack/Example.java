package mypack;

public class Example
{
    int x;
    public int y;
    private int z;
    protected int p;

    public void set()
    {
        x=1;
        y=2;
        z=3;
        p=4;
    }
    public void display()
    {
        System.out.println("x = " + x);
        System.out.println("y = " + y);
        System.out.println("z = " + z);
        System.out.println("p = " + p);
    }
}

