//Constructor overlooding

public class Constructor2
{
    double l,b,h;
    Constructor2()
    {
        l=b=h=5;
    }
    Constructor2(double a)
    {
        l=b=h=a;
    }
    Constructor2(double x,double y,double z)
    {
        l=x;
        b=y;
        h=z;
    }
    void volume()
    {
        System.out.println("Volume ="+(l*b*h));
    }
    public static void main(String[] args)
    {
        Constructor2 c1=new Constructor2();
        Constructor2 c2=new Constructor2(10);
        Constructor2 c3=new Constructor2(10,20,30);
        c1.volume();
        c2.volume();
        c3.volume();
    }
}
