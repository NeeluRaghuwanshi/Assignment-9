//change if else construct to switch
#include<stdio.h>
int main()
  {
     int x;
     printf("Enter a number\n");
     scanf("%d",&x);
     switch(x)
        {
           case 1:
             printf("Good\n");
             break;
           case 2:
             printf("Better\n");
             break;
           case 3:
             printf("Best\n");
             break;
           default:
             printf("Invalid input");
        }
        return 0;
  }
