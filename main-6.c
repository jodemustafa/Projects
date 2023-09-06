/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define size 60

int main()
{
    char *name;
    
    name= malloc(size * sizeof(char));
    
    if (name==NULL)
    {
        printf("erro null");
        return(1);
    }
    
    printf("enter an input ");
    fgets(name, size, stdin);
    printf("you entered %s", name);
    
    

    return 0;
}
