#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2,n3;
    printf("enter three number");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>n2 && n1>n3)
    {
        printf("number1 is gt %d",n1);
    }
    else if(n2>n1 && n2>n3)

    {
        printf("number2 is gt %d",n2);
    }
    else
    {
        printf("number3 is gt %d",n3);

    }
    return 0;
    }