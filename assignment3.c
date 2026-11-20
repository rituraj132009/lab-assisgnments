#include <stdio.h>
int main()
{
    int a,b,opt;
    printf("Enter 1st number : ");
    scanf("%d", &a);

    printf("Enter 2nd number : ");
    scanf("%d",&b);

    printf(" 1. Addition \n");
    printf(" 2. Substraction \n");
    printf(" 3. Multiplication \n");
    printf(" 4. Division \n");
    printf(" 5. Square\n");

    printf("Enter Choice (1 to 5) : ");
    scanf("%d", &opt);

    switch (opt)
    {
    case 1:
    printf("Addition is : %d \n", a+b );
    break;

    case 2:
    printf("Substraction is :  %d \n" , a-b );
    break;

    case 3:
    printf("Multiplication is : %d \n" , a*b);
    break;

    case 4:
    if (b==0)
    {
        printf("Division by 0 is not possible\n");
    }

    else
    {
    printf("Division is : %.3f \n" , (float) a/b);   
    }

    break;

    case 5:
    printf("The Sqaure of 1st number : %d\n" , a*a);
    printf("The Square of 2nd number : %d\n" , b*b);
    break;

    default:
    printf("Invalid Input \n");
    
    }

    return 0;
    }
    
