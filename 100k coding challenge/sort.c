#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, n,a[100],temp,j;
    printf("enter the limit");
    scanf("%d",&n);
    printf("enter the values");
    for(i=0;i<n;i++)
    {
scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("the sorted order is");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
}