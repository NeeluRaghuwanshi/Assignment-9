//Write a program which takes the month number as an input and display
//number of days in that month,using switch.
#include<stdio.h>
int main()
   {
     int n;
     printf("Enter month number\n");
     scanf("%d",&n);
     switch(n)
       {
         case 1:
         case 3:
         case 5:
         case 7:
         case 8:
         case 10:
         case 12:
              printf("Number of days are 31\n");
              break;
         case 4:
         case 6:
         case 9:
         case 11:
              printf("Number of days are 30\n");
              break;
         case 2:
              printf("Number of days are 28/29");
       }
       return 0;
   }
