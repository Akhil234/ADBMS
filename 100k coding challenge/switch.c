#include<stdio.h>
#include<stdlib.h>
int main()
{
    int choice;
    printf("1.porotta,\n 2.biryani \n 3.tandoori \n 4.shawaya");
    printf("enter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("porotta 123");
        break;
        case 2:
        printf("biriyani");
        break;
        case 3:
        printf("chicken fry");
        break;
        case 4:
        printf("shawaya thero");
        break;
        case 5:
        default:
        printf("wrong choice is entered");
        break;
    }
}