#include <stdio.h>
#include <stdlib.h>

// this is a 2d array to store all the rates for all equipments
int equipment_rates[4][3] = {
    {7, 10, 40},
    {27, 39, 156},
    {61, 87, 348},
    {59, 84, 336}};

// this initilizes my variables to 0
int total_price = 0;
int hours = 0;
int days = 0;
int weeks = 0;

// this introduces the function to C
int calculateTotalPrice(int equipmentChoice, int hours, int days, int weeks);

int main()
{
    // this part asks the user to choose which equipment
    int input_equipment;
    printf("Please select from four equipment: 1, 2, 3, and 4 \n");
    printf("Enter equipment selection: ");
    scanf("%d", &input_equipment);

    // this part checks if equipment choice available
    if (input_equipment < 1 || input_equipment > 4)
    {
        printf("Invalid selection. Select from 1 to 4. \n");
        exit(1);
    }
    // this asks for days
    int input_days;
    printf("Enter days: ");
    scanf("%d", &input_days);

    // this asks for hours
    int input_hours;
    printf("Enter hours: ");
    scanf("%d", &input_hours);

    // this makes sure the hours entered are not more/less than in a day
    if (input_hours < 0 || input_hours > 24)
    {
        printf("Invalid hours.");
        exit(1);
    }

    // this checks if hours greater than 4 make it a day
    if (input_hours <= 4)
        hours = 1;

    if (input_hours > 4)
    {
        days += 1;
        hours = 0;
    }

    // this checks if the amount of days entered makes a week charge or still
    // below week
    if (input_days <= 3)
    {
        days += input_days;
        weeks = 0;
    }
    // if the days are greater than 3 and the price is more than a week we consider it 1 week
    if (input_days > 3)
    {
        weeks = input_days / 7;
        if (input_days % 7 <= 3)
        {
            days = input_days % 7;
        }
        else if (input_days % 7 > 3)
        {
            weeks += 1;
            days = 0;
        }
    }
    // this function calls calculate the price ans takes hours,days,weeks,equipment number as input
    int total_price = calculateTotalPrice(input_equipment, hours, days, weeks);
    printf("Charge($): %d \n", total_price);
    return 0;
}
// this is what tells the function what to do wheh called
int calculateTotalPrice(input_equipment, hours, days, weeks)
{
    // we use -1 nbecause in C we start from 0 so if thr user enters 2 it becomes 1
    int total_price = hours * equipment_rates[input_equipment - 1][0] + days * equipment_rates[input_equipment - 1][1] + weeks * equipment_rates[input_equipment - 1][2];
    return total_price;
}
