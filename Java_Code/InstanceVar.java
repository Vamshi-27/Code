//Usage of this keyword

public class InstanceVar 
{
    double x, y;

    InstanceVar(double x, double y) 
    {
        this.x = x;
        this.y = y;
        System.out.println("Using this keyword");
        System.out.println("x =" + x + "\ny =" + y);
    }

    public static void main(String[] args) 
    {
        new InstanceVar(23.5, 27.5);
    }
}
