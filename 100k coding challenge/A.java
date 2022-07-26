public class A extends inheritance 
{
    int a;
void display()
{
    a=20;
    super.a=10;
    int c=a+super.a;
    System.out.println(c);

    System.out.println("Its B");
    super.display2();


}
A()
{
    System.out.println("this is A");
   // super.inheritance();
}
A(int a)
{
super(10);
    System.out.println("this is cons of B");
}
public static void main(String args[])
{
   A s=new A(10);
  // s.display();
   
   
}
}




class inheritance
{
    int a;
    void display2()
    {
        System.out.println("this is A");
    }
    inheritance()
    {
        System.out.println("this is base class");
    }
    inheritance(int a)
    {
        System.out.println("this is arg cons of inheritance");
    }
}