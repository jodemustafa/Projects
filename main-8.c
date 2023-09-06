/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

# include <stdio.h>
# include <string.h>

int main() 
{
    char string1[70];
    char string2[70];
    printf("what is your first string\n");
    fgets(string1,70, stdin);

    printf("what is your second string \n");
    fgets(string2,70, stdin);

    
    char combined[100];
    strcpy(combined,string1);
    strcat(combined,string2);
    
    printf("%s",combined);
    
    return(0);
}

