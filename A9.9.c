//positive to nearest odd number
#include<stdio.h>
 int main()

  {
      int x;
      printf("Enter a number:\n");
      scanf("%d",&x);
      switch(x%2==0)
         {
         case 1:
            printf("nearest upper odd number is %d",x=x+1);
            break;
         case 0:
            printf("%d is itself an odd number",x);
            break;
         }
         return 0;
  }
