//Implementing Interface

interface Resizable
{
    void resizewidth(int width);
    void resizeheight(int height);
}

class Rectangle implements Resizable
{
    int width,height;
    Rectangle(int width, int height)
    {
        this.width = width;
        this.height = height;
    }
    public void resizewidth(int width) 
    {
        this.width = width;
    }
    public void resizeheight(int height)
    {
        this.height = height;
    }
}
public class Lab7
{
    public static void main(String[] args) 
    {
        Rectangle obj=new Rectangle(10,20);
        System.out.println("Width="+obj.width + "\nHeight="+obj.height);
        obj.resizewidth(100);
        obj.resizeheight(200);
        System.out.println("Updated values are:");
        System.out.println("Width="+obj.width + "\nHeight="+obj.height);
    }
}
