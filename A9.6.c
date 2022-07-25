// given year is leap year or not
#include<stdio.h>
int main()
  {
  int n,x;
  printf("Enter a Year\n");
  scanf("%d",&n);
  x=(((n%4 == 0) && (n%100 !=0)) || n%400 == 0);
  switch(x)
  {
     case 1:
      printf("Leap year\n");
      break;
     case 0:
      printf(" Not a leap year\n");
      break;
     default :
      printf("invalid input");
  }
  return 0;
  }
