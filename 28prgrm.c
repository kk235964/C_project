#include <stdio.h>

int main()
{
    int i,k, j,l,d=0;

    for (i = 1; i <= 5; i++)
    {
        d=d+2;
        for (k = 1; k <= i; k++)
        {
            printf("%d", k);
        }
        for (j = 1; j <= 9 - d;j=j+1)
        {
            printf(" ");
        }
        for(l=i;l>=1;l--)
        {
            if (l==5)
            l=4;
            printf("%d",l);
        }
        printf("\n");
    }
    return 0;
}