//Write a program which takes the day number of a week and displays a
//unique greeting message for the day.
#include<stdio.h>
int main()
    {
       int n;
       printf("Enter a day number between 1 to 7\n");
       scanf("%d",&n);
       switch(n)
          {
            case 1:
                printf("WISH YOU A VERY FUN LOVING SUNDAY\n");
                break;
            case 2:
                printf("WISH YOU A HAPPY MONDAY\n");
                break;
            case 3:
                printf("WISH YOU A BEAUTIFUL TUESDAY\n");
                break;
            case 4:
                printf("WISH YOU A WONDERFUL WEDNESDAY\n");
                break;
            case 5:
                printf("HAVE A BLESSED THRUSDAY\n");
                break;
            case 6:
                printf("WISH YOU A FANTASTIC FRIDAY\n");
                break;
            case 7:
                printf("HAVE A SUPER SATURDAY\n");
                break;
            default:
                printf("Invalid input\n");

          }
          return 0;
    }
