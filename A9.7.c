// Electricity Bill
#include<stdio.h>
int main()
    {
      float x,amt=0,total=0;
      printf("enter number of units\n");
      scanf("%f",&x);
      switch(x<=50)
         {
           case 1:
               amt=x*0.5;
               break;
           case 0:
                switch(x<=150)
                  {
                    case 1:
                        amt=25+(x-50)*0.75;
                        break;
                    case 0:
                         switch(x<=250)
                           {
                              case 1:
                                 amt=100+(x-150)*1.20;
                                 break;
                              case 0:
                                 amt=220+(x-250)*1.50;
                                 break;
                           }break;
                  }break;
         }
         total=amt+(amt*0.20);
         printf("Total bill amount is %f",total);
         return 0;
    }
