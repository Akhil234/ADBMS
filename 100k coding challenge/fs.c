#include<stdio.h>
#include<stdlib.h>
int sum();
int main()
{
 int c;
 //printf("enter two values");
 //scanf("%d%d",&a,&b);
 c=sum();
 printf("result is %d:",c);
 return(0);
    
}

int sum()
{
    int sum;
    int n1,n2;
    printf("enter two numbers");
    scanf("%d%d",&n1,&n2);
    sum=n1+n2;
    //printf("sum is:%d",sum);
    return sum;

}
