class MyPoint 
{
    int x, y;

    MyPoint() 
    {
        x = 0;
        y = 0;
    }

    MyPoint(int a, int b) 
    {
        this.x = a;
        this.y = b;
    }

    void setxy(int a, int b) 
    {
        this.x = a;
        this.y = b;
    }

    int[] getxy() 
    {
        int[] a = new int[2];
        a[0] = x;
        a[1] = y;
        return a;
    }

    public String toString() 
    {
        return "(" + x + "," + y + ")";
    }

    double distance(int x, int y) 
    {
        return Math.sqrt(Math.pow(this.x - x, 2) + Math.pow(this.y - y, 2));
    }

    double distance() 
    {
        return Math.sqrt(Math.pow(this.x, 2) + Math.pow(this.y, 2));
    }

    double distance(MyPoint p2) 
    {
        return Math.sqrt(Math.pow(this.x - p2.x, 2) + Math.pow(this.y - p2.y, 2));
    }
}

public class Lab4 
{
    public static void main(String[] args) 
    {
        MyPoint P1 = new MyPoint();
        MyPoint P2 = new MyPoint(10, 20);

        int[] a = P1.getxy();
        System.out.println("P1.x=" + a[0] + "\nP1.y=" + a[1]);

        P1.setxy(5, 6);
        System.out.print("Point P1 = ");
        System.out.println(P1);

        System.out.print("Point P2 = ");
        System.out.println(P2);

        System.out.println("Distance between point P1 & (2,3) = " + P1.distance(2, 3));

        System.out.println("Distance from P1 to origin = " + P1.distance());

        System.out.println("Distance between P1 & P2 = " + P1.distance(P2));
    }
}
