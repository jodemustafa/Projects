/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    enum Companies { GOOGLE , FACEBOOK, XEROX,YAHOO,EBAY,MICROSOFT};
    
    enum Companies comp1;
    comp1=XEROX;
    
    enum Companies comp2;
    comp2=GOOGLE;
    
    enum Companies comp3;
    comp3=EBAY;
    
    printf("xerox is %d \n",comp1);
    printf("google is %d \n", comp2);
    printf("ebay is %d \n",comp3);

    return 0;
}
