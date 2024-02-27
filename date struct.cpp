#include <stdio.h>

struct Date 
{
    int day;
    int month;
    int year;
};


int compareDates(struct Date date1, struct Date date2) 
{
    if (date1.year < date2.year)
        return -1;
    else if (date1.year > date2.year)
        return 1;
    else 
    {
        if (date1.month < date2.month)
            return -1;
        else if (date1.month > date2.month)
            return 1;
        else 
        {
            if (date1.day < date2.day)
                return -1;
            else if (date1.day > date2.day)
                return 1;
            else
                return 0; 
        }
    }
}

int main() 
{
    struct Date date1, date2;

    printf("Enter first date (DD MM YYYY): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    printf("Enter second date (DD MM YYYY): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    int comparison = compareDates(date1, date2);

    if (comparison < 0)
        printf("First date comes before the second date.\n");
    else if (comparison > 0)
        printf("First date comes after the second date.\n");
    else
        printf("Both dates are equal.\n");

    return 0;
}
