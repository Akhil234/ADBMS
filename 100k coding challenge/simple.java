class sample2
{
    int a;
    String b;
    sample2(int a,String b)
    {
        this.a=a;
        this.b=b;
    }
    void display()
    {
        System.out.println("name"+a+" "+"id"+b);
    }

}
    class simple
    {
        public static void main(String args[])
        {
            sample2 s2=new sample2(10,"akhil");
            sample2 s1=new sample2(20,"nikhil");
            s2.display();
            s1.display();

        }
    }

