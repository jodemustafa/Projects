/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int choice;
    
    printf("enter your choice (1-3) ");
    scanf("%d", &choice);
    
    switch(choice)
    {
        case 1:
        printf("Red \n");
        break;
        
        case 2:
        printf("Green \n");
        break;
        
        case 3:
        printf("Blue");
        break;
        
        default:
        printf("invalid");
        break;
        
    }
}
