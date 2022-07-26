class sample
{
    int a;
    int b;
class home
{
    public static void main(String args[])
    {
    sample s1=new sample();
    sample s2=new sample();
    s1.a=20;
    s2.a=50;
    s2.b=100;
    s2.b=133;
    System.out.println("S1->a"+s1.a+"S2->a"+s2.a);
    System.out.println("S1->b"+s1.b+"S2->b"+s2.b);
    }
}
}
