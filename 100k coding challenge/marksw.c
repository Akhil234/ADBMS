#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(void)
{
    int mark;
    printf("enter the mark");
    scanf("%d",&mark);
          if (mark<=10)
    
               printf("grade illa");
        
        
           else if (mark>=10 && mark<=20)
          
                printf("grade c");
          
          
           else if (mark>=20 && mark<=30)
        
               printf("grade b");
        
        else
        
               printf("A");
               getch();
        return 0;
}