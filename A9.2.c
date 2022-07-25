//Write a menu driven program with the following options:
//a. Addition
//b. Subtraction
//c. Multiplication
//d. Division
//e. Exit

#include<stdio.h>
int main()
  {
      int x,n1,n2;
      while(1)
      {
      printf("1. Addition\n");
      printf("2. Substraction\n");
      printf("3. Multiplication\n");
      printf("4. Division\n");
      printf("5. Exit\n\n");
      printf("Enter your choice\n");
      scanf("%d",&x);
      switch(x)
         {
           case 1:
              printf("Enter Two Numbers\n");
              scanf("%d %d",&n1,&n2);
              printf("Sum is %d\n",n1+n2);
              break;
           case 2:
              printf("Enter Two Numbers\n");
              scanf("%d %d",&n1,&n2);
              printf("Difference is %d\n",n1-n2);
              break;
           case 3:
              printf("Enter Two Numbers\n");
              scanf("%d %d",&n1,&n2);
              printf("Product is %d\n",n1*n2);
              break;
           case 4:
              printf("Enter Two Numbers\n");
              scanf("%d %d",&n1,&n2);
              printf("quotiont is %d\n",n1/n2);
              break;
           case 5:
              break;
           default:
              printf("Invalid choice");
         }
          if(x==5)
            break;
         printf("\n");
         }
         return 0;

  }
