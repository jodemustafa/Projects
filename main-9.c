/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void evaluate(int x);

int main()
{
	int i;

	printf("Type an integer value: ");
	scanf("%d",&i);
	evaluate(i);

	return(0);
}

void evaluate(int x)
{
	if(x<10)
	
	    printf("it is less than 10 %d \n",x );
	
        
    else if(x>10)
    
        printf("it is greater than 10 %d \n",x );
    
    
    else
        printf("it is equal to 10 %d \n", x);
    

}
