#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    for(i=0;i<10;i++)
    {
        printf("\nhi");
        if(i==6)
        {
            continue;
        }
        printf("\n hello");
    }
    printf("finished");
}