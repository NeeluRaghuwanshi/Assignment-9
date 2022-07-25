//positive to negative or negative to positive
#include<stdio.h>
 int main()

  {
      int x;
      printf("Enter a number:\n");
      scanf("%d",&x);
      switch(x>=0)
         {
         case 1:
            printf("-%d",x);
            break;
         case 0:
            printf("%d",x=-x);
            break;
         }
         return 0;
  }
