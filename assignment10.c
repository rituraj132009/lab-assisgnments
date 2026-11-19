
#include <stdio.h>

int main()
{
    int year, i, j, day = 0;
    int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    char *month[] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    printf("Enter year: ");
    scanf("%d", &year);

    // Leap year check
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        days[1] = 29;

    // First day of year
    day = (year + (year-1)/4 - (year-1)/100
           + (year-1)/400) % 7;

    for (i = 0; i < 12; i++)
    {
        printf("\n\n     %s %d\n", month[i], year);
        printf("Sun Mon Tue Wed Thu Fri Sat\n");

        for (j = 0; j < day; j++)
            printf("    ");

        for (j = 1; j <= days[i]; j++)
        {
            printf("%3d ", j);
            day++;

            if (day == 7)
            {
                day = 0;
                printf("\n");
            }
        }
    }

    return 0;
}
