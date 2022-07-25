//check if triangle is equilateral, isosceles, right angled triangle
#include<stdio.h>
int main()
  {
      int n,x,y,z;
      while(1)
      {
      printf("1.check given set of three numbers are lengths of a isosceles triangle or not\n");
      printf("2.Check given set of three numbers are lengths of a right angled triangle or not\n");
      printf("3.Check given set of three numbers are equilateral triangle or not\n");
      printf("4. Exit\n\n");
      printf("Enter your choice\n\n");
      scanf("%d",&n);
      switch(n)
         {
           case 1:
              printf("Enter Three sides of a triangle\n");
              scanf("%d %d %d",&x,&y,&z);
                switch(x==y || y==z || z==x)
                   {
                  case 1:
                    printf(" Isoceles Triangle\n");
                    break;
                  case 0:
                    printf("NOt an isoceles triangle\n");
                   }
                  break;
           case 2:
              printf("Enter Three sides of a triangle\n");
              scanf("%d %d %d",&x,&y,&z);
               switch(x*x==y*y+z*z || y*y==x*x+z*z || z*z==x*x+y*y)
                    {
                         case 1:
                            printf(" Right angeled Triangle\n");
                            break;
                         case 0:
                            printf("NOt a right angeled triangle\n");
                    }break;
           case 3:
              printf("Enter Three sides of a triangle\n");
              scanf("%d %d %d",&x,&y,&z);
               switch(x==y && y==z)
                  {
                       case 1:
                          printf(" Equilateral Triangle\n");
                          break;
                       case 0:
                          printf("NOt an Equilateral triangle\n");
                  } break;
           case 4:
              break;
         }
          if(n==4)
            break;
         printf("\n");
         }
         return 0;

  }
