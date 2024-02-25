//Polymorphism concept using Inheritance

class Shape
{
    void draw()
    {
        System.out.println("Drawing shape");
    }
    void erase()
    {
        System.out.println("Erasing shape");
    }
}

class Circle extends Shape
{
    void draw()
    {
        System.out.println("Drawing Circle");
    }
    void erase()
    {
        System.out.println("Erasing Circle");
    }
}

class Triangle extends Shape
{
    void draw()
   {
       System.out.println("Drawing Triangle");
   }
   void erase()
   {
       System.out.println("Erasing Triangle");
   }
}

class Square extends Shape
{
    void draw()
    {
        System.out.println("Drawing Square");
    }
    void erase()
    {
        System.out.println("Erasing Square");
    }
}

public class Lab6a 
{
    public static void main(String[] args) 
    {
        Shape ref;
        ref = new Circle();
        ref.draw();
        ref.erase();
        ref = new Triangle();
        ref.draw();
        ref.erase();
        ref = new Square();
        ref.draw();
        ref.erase();
    }
}
