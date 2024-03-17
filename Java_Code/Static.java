//Static->It is used to create a member that can be accessed without creating an object.

//Program to count number of objects created.
public class Static 
{
    static int count=0;
    Static()
    {
        count++;
    }
    public static void main(String[] args) 
    {
        new Static();
        new Static();
        new Static();
        System.out.println("Number of objects created = "+count);
    }
}
