#include<stdio.h>
int main()
{
    int d;
    printf("Enter a number between 1 to 7 to get the corresponding day.\n");
    scanf("%d",&d);
    if (d>0&&d<8)
    {
        switch (d)
        {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            break;
        }
    }
    else
    printf("Enter a valid No.");

    return 0;
}