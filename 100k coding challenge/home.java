class h
{
    int a;
    int b;
    int c;
    void sum()
    {
        c=a+b;
    }
    void display()
    {
        sum();
System.out.println("sum"+c);
    }
}
public class home
{
    public static void main(String args[])
    {
    h s1=new h();
    h s2=new h();
    s1.a=20;
    s2.a=4;
    s1.b=100;
    s2.b=133;
    //System.out.println("S1->a"+s1.a+"S2->a"+s2.a);
    //System.out.println("S1->b"+s1.b+"S2->b"+s2.b);
    //s1.sum();
    //s2.sum();
    s1.display();
    s2.display();
    }
}

