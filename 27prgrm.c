#include <stdio.h>
#include <math.h>

int main()
{
    int num,k, n, r;
    printf("Palindrome Number\n");
    for (num = 1; num <= 500; num++)
    {
        k=0;
        n = num;
        while (n != 0)
        {
            r = n % 10;
            k = k * 10 + r;
            n = n - r;
            n = n / 10;
        }
        if (k == num)
        {
            printf("%d\t", num);
        }
    }

    return 0;
}