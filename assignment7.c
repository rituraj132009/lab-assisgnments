#include <stdio.h>

struct student
{
    int roll;
    int m1, m2, m3;
    int total;
    char name[20];
    float percentage;
};

int main()
{
    struct student s[10];
    int n, i;

    printf("\nEnter number of students: ");
    scanf("%d", &n);

    if(n < 1 || n > 10)
    {
        printf("\nEnter between 1 to 10");
        return 0;
    }

    
    for(i = 0; i < n; i++)
    {
        printf("\nEnter roll no: ");
        scanf("%d", &s[i].roll);

        printf("Enter name: ");
        scanf("%19s", s[i].name);

        printf("Enter marks of 3 subjects: ");
        scanf("%d%d%d", &s[i].m1, &s[i].m2, &s[i].m3);

        
        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
        s[i].percentage = s[i].total / 3.0;
    }

    printf("\n");
    printf("-----------------------------------------------------------------------------------------\n");

    printf("%-10s %-15s %-12s %-12s %-12s %-10s %-12s\n",
           "Roll No", "Name", "Subject 1", "Subject 2",
           "Subject 3", "Total", "Percentage");

    printf("-----------------------------------------------------------------------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("%-10d %-15s %-12d %-12d %-12d %-10d %-12.2f\n",
               s[i].roll,
               s[i].name,
               s[i].m1,
               s[i].m2,
               s[i].m3,
               s[i].total,
               s[i].percentage);
    }

    printf("-----------------------------------------------------------------------------------------\n");

    return 0;
}
