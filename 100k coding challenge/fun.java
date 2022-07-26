import java.util.*;
public class fun
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int s=0;
        int a=sc.nextInt();
        int b=sc.nextInt();
        s=sum(a,b);
        System.out.println("sum is ="+s);
    }
static int sum(int n1,int n2)
{
    System.out.println("enter two numbers");
    int s1=n1+n2;
    return s1;
}
}