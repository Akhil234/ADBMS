#include<stdio.h>
#include<stdlib.h>
int main()
{
    int searchkey,flag=03;
    int sum=0;
    int n;
    int a[100];
    int i;
    printf("enter the array limit");
    scanf("%d",&n);
    printf("enter values");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);

}

printf("enter the value to be searched");
scanf("%d",&searchkey);
for(i=0;i<n;i++)
{
if(searchkey==a[i])
{
    flag=1;
    printf(" the value is found at %d position",i+1);
    break;
}
else
{
    
    printf(" the value is not found");
    break;
}
}
return 0;
}
