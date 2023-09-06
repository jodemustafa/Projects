/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   double width,height,perimeter,area;
   
   //getting input
   printf("enter the width \n");
   scanf("%lf", &width);
   
   printf("enter height \n");
   scanf("%lf", &height);
   
   perimeter=(height+width)* 2.0;
   area = (width*height);
   
   printf("perimeter is %.2lf and area is %.2lf \n", perimeter,area);

    return 0;
}
