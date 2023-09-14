
//jode mustafa u41333726
//this code checks user input if the letters are in order and if they input a nonletter code stops it compares them using ASCII

#include <stdio.h>
#include <ctype.h>

int main()
{
    // gets input from user
    printf("Enter input: ");

    // set a variable that assumes they are in order
    int is_ordered = 1;
    int prev_Char = -1; // Initialize to an invalid ASCII value
    int currentChar;
    int hasNonLetter = 0; // Flag to track non-letter characters

    // Read and process input
    while ((currentChar = getchar()) != '\n' && currentChar != EOF)
    {
        if (!isalpha(currentChar))
        {
            hasNonLetter = 1; // Set the flag to indicate non-letter character
        }

        if (prev_Char != -1 && currentChar <= prev_Char)
        {
            is_ordered = 0; // Characters are not in order
            break;
        }

        prev_Char = currentChar; // Update prev_Char for the next iteration
    }

    if (hasNonLetter)
    {
        printf("invalid input");
        return 1; // Exit the program with an error code
    }

    if (is_ordered == 1)
    {
        printf("in order");
    }
    else
    {
        printf("not in order");
    }
    return 0;
}
