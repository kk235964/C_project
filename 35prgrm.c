#include <stdio.h>
int SumSeries(int n);

int main()
{
    int n;
    printf("Enter a no. to get natural sum to that no.\n");
    scanf("%d", &n);
    printf("%d", SumSeries(n));

    return 0;
}

int SumSeries(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + SumSeries(n - 1);
}