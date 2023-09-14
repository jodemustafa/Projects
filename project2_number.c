// Jode Mustafa U41333726
// this code checks if the user integer input has the number 3 and is divisble by 3 if yes it is a special number

#include <stdio.h>

int main()
{
    //ask user for input
    int user_input;
    printf("Enter input: ");
    scanf("%d", &user_input);

    int original_input = user_input; // Store the original input

    int i = 0;
    while (user_input > 0)//makes sure the user entered somehting then enters a while loop
    {
        if (user_input % 10 == 3) // this gets you the last digit and you check from that till the first digit
        {
            i = 1;
            break; // if it is 3 no need to continue and you break the loop
        }
        else
        {
            user_input /= 10;
        }
    }

    if (i == 1) // if true and we found 3 we need to check if it is divisble by 3
    {
        if (original_input % 3 == 0)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
    }
    else
    {
        printf("no ");
    }
}
