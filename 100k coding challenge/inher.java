abstract class a 
{
    void m1()
    {
        System.out.println("this is rockt");
    }
   abstract void m2();
   abstract void m3();
    
}
abstract class b extends a
{
    void m2()
    {
System.out.println("this is class m2");
    }
   /* void m1()
    {
        System.out.println("this is class m1");
    }
    */ 
}
abstract class c extends b
{
    void m3()
    {
        System.out.println("this is display");
    }
}
public class inher

{
    public static void main(String args[])
    {
        c in=new c();
        in.m3();
        in.m2();
        in.m1();
    }

}