/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr = arr;  // Pointer initialized to the array's first element
        
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, *ptr);  // Accessing array elements using the pointer
        ptr++;  // Moving the pointer to the next element
    }

    return(0);
}