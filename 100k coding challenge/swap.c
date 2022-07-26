#include<stdio.h>
#include<conio.h>
int main()
{
    int n,a[100],b[100],c[100],i,j;
    printf("enter the limit");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the elements of the second array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("\nfirst array");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n second array");
    for(i=0;i<n;i++)
    {
    printf("%d",b[i]);
    }
    printf("after swapping");
    for(i=0;i<n;i++)
    {
        c[i]=a[i];
        a[i]=b[i];
        b[i]=c[i];
    }
     printf("the first array");
    for(i=0;i<n;i++)
    {
       printf("\n%d",a[i]);
    }
     printf("the second array");
     for(i=0;i<n;i++)
     {
        printf("\n%d",b[i]);
     }
     return 0;

}