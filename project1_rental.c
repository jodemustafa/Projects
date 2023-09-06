// Jode mustafa u4133726 COP3514
// this program asks user for which cleaning equipment they want and then the
// time and depending on the time a certain total price is calculated and shown
// to user.

#include <stdio.h>
#include <stdlib.h>
#define hours_1 7
#define day_1 10
#define week_1 40
#define hours_2 27
#define day_2 39
#define week_2 156
#define hours_3 61
#define day_3 87
#define week_3 348
#define hours_4 59
#define day_4 84
#define week_4 336

int total_price = 0;
int hours = 0;
int days = 0;
int weeks = 0;

int Totalprice_calculate1(int hours, int days, int weeks);
int Totalprice_calculate2(int hours, int days, int weeks);
int Totalprice_calculate3(int hours, int days, int weeks);
int Totalprice_calculate4(int hours, int days, int weeks);

int main() {
  // this part asks the user to choose which equipment
  int input_equipment;
  printf("Please select from four equipment: 1, 2, 3, and 4 \n");
  printf("Enter equipment selection: ");
  scanf("%d", &input_equipment);

  // this part checks if equipment choice available
  if (input_equipment < 1 || input_equipment > 4) {
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
  if (input_hours < 0 || input_hours > 24) {
    printf("Invalid hours.");
    exit(1);
  }

  // this checks if hours greater than 4 make it a day
  if (input_hours <= 4)
    hours = 1;

  if (input_hours > 4) {
    days += 1;
    hours = 0;
  }

  // this checks if the amount of days entered makes a week charge or still
  // below week
  if (input_days <= 3) {
    days += input_days;
    weeks = 0;
  }

  if (input_days > 3) {
    weeks = input_days / 7;
    if (input_days % 7 <= 3) {
      days = input_days % 7;
    } else if (input_days % 7 > 3) {
      weeks += 1;
      days = 0;
    }
  }

  int total_price = 0;

  if (input_equipment == 1) {
    total_price = Totalprice_calculate1(hours, days, weeks);
  } else if (input_equipment == 2) {
    total_price = Totalprice_calculate2(hours, days, weeks);
  } else if (input_equipment == 3) {
    total_price = Totalprice_calculate3(hours, days, weeks);
  } else if (input_equipment == 4) {
    total_price = Totalprice_calculate4(hours, days, weeks);
  }

  printf("Charge($): %d \n", total_price);
  return 0;
}

int Totalprice_calculate1(int hours, int days, int weeks) {
  int total_price = hours * hours_1 + day_1 * days + week_1 * weeks;
  return (total_price);
}

// this prt does the cALulcation for every case alone
int Totalprice_calculate2(int hours, int days, int weeks) {
  int total_price = hours * hours_2 + day_2 * days + week_2 * weeks;
  return (total_price);
}

int Totalprice_calculate3(int hours, int days, int weeks) {
  int total_price = hours * hours_3 + day_3 * days + week_3 * weeks;
  return (total_price);
}

int Totalprice_calculate4(int hours, int days, int weeks) {
  int total_price = hours * hours_4 + day_4 * days + week_4 * weeks;
  return (total_price);
}
