/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t;
    srand((unsigned) time(&t));
    int randomnumb = rand() %21;
    
    int guessed_numb; 
    
    printf("guess a number between 0-20 \n");
    scanf("%d", &guessed_numb);
    
    if (guessed_numb>20)
    {
        printf("the value is above 20 guess again ");
        scanf("%d", &guessed_numb);
    }
    
    int n=4;
    while(n<=4)
    {   
        if (n==0)
        {
            printf("you are out of guesses!");
            break;
        }
        
        if (guessed_numb>randomnumb)
        {
            printf("you have %d trials left \n", n);
            printf("guess lower value entered is too high \n");
            scanf("%d", &guessed_numb);
            n-=1;
        }
        if (guessed_numb<randomnumb)
        {
            printf("you have %d trials left \n", n);
            printf("guess higher value entered is too low \n");
            scanf("%d", &guessed_numb);
            n-=1;
        }
        if (guessed_numb==randomnumb)
        {
            printf("you guessed the number!!");
            break;
        }
    }
    
    return 0;
}
