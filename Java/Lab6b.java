//Abstract class and methods

abstract class Shape
{
    abstract void calcArea();
    abstract void calcPeri();
}

class Circle extends Shape 
{
    double radius;

    Circle(double r) 
    {
        radius = r;
    }

    void calcArea() 
    {
        System.out.println("Area of circle is = " + (3.14 * radius * radius));
    }

    void calcPeri() 
    {
        System.out.println("Perimeter of circle is =" + (2 * 3.14 * radius));
    }
}

class Triangle extends Shape
{
    double a,b,c;
    Triangle(double x, double y, double z) 
    {
        a = x;
        b = y;
        c = z;
    }
    double s;
    void calcArea()
    {
        s = (a + b + c) / 2;
        double area = Math.sqrt(s * (s - a) * (s - b) * (s - c));
        System.out.println("Area of triangle is = " + area);
    }
    void calcPeri()
    {
        double peri = 2*s;
        System.out.println("Perimeter of triangle is =" + peri);
    }
}

public class Lab6b 
{
    public static void main(String[] args) 
    {
        Shape ref;
        ref = new Circle(10);
        ref.calcArea();
        ref.calcPeri();

        ref = new Triangle(10,20,15);
        ref.calcArea();
        ref.calcPeri();
    }
}
