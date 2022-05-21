#include <stdio.h>
#include <math.h>
void PrimeNo(int a);
int main()
{
    int a;
    printf("Enter a No. to Know if it is Prime or not\n");
    scanf("%d", &a);
    PrimeNo(a);

    return 0;
}



void PrimeNo(int b)
{
    int r, i;
    for (i = 2; i <= sqrt(b); i++)
    {
        r = b % i;
        if (r == 0)
        {
            printf("You have entered a NON-Prime N0.\n");
            break;
        }
    }
    if (r != 0)
    {
        printf("You have entered a Prime N0.\n");
    }
}
