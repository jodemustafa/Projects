/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    double minute;
    printf("enter a value:");
    scanf("%lf", &minute);
    
    double minute_year =525600;
    
    double years;
    
   years= minute/ minute_year;
   
   printf("years is %lf \n", years);
   
   double days;
   
   days=minute/1440;
   
   printf("days is %lf", days);

    
    

    return 0;
}
