import java.util.*;
public class if3
{
    public static void main(String args[])
    { 
        int sum=0;
        Scanner obj=new Scanner(System.in);
        System.out.println("enter the limit");
        int a=obj.nextInt();
       for(int i=0;i<a;i++)
       {
        sum=sum+i;
       }
        System.out.println("sum of num=" +sum);
    }

}