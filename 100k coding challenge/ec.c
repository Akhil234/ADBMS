#include<stdio.h>
#include<stdlib.h>
int main()
{
    int no=0;
    int i, n,a[100],temp,j;
    printf("enter the limit");
    scanf("%d",&n);
    printf("enter the values");
    for(i=0;i<n;i++)
    {
scanf("%d",&a[i]);
    }
    printf("even numbers");
    for(i=0;i<n;i++)
    {
        if(a[i]%2 == 0)
        {
            //printf("%d",a[i]);
            no++;
        }
    }
     printf("\n%d",no);
     return 0;
}