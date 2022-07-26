#include<stdio.h>
#include<conio.h>
int main()
{
    int n,a[50][50],i,j;
    printf("enter the limit");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("display\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
    
    printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}