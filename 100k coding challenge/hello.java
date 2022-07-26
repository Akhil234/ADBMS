public class hello
{
     int b=20;
    static int a=10;
    public static void main(String args[])
    {
        hello s=new hello();
        hello s1=new hello();
        s.a=1000;
        s.b=30;
        s1.b=5;
        s1.a=30000;
        s1.a=1;
        //System.out.println(s.a);
        System.out.println("s.b="+s1.b);
        System.out.println("a="+a);
    }
}