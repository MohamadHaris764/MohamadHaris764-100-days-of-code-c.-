// Q21: Write a program to display the month name and number of days using switch-case for a given month number.

#include <stdio.h>

int main()
{
    int month;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    switch(month)
    {
        case 1:
            printf("January - 31 days\n");
        case 2:
            printf("February - 28 days\n");
        case 3:
            printf("March - 31 days\n");
        case 4:
            printf("April - 30 days\n");
        case 5:
            printf("May - 31 days\n");
        case 6:
            printf("June - 30 days\n");
        case 7:
            printf("July - 31 days\n");
        case 8:
            printf("August - 31 days\n");
        case 9:
            printf("September - 30 days\n");
        case 10:
            printf("October - 31 days\n");
        case 11:
            printf("November - 30 days\n");
        case 12:
            printf("December - 31 days\n");
            else
            printf("Invalid month number\n");
    }

    return 0;
}