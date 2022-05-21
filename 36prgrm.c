#include <stdio.h>
int fibonacci(int i);

int main()
{
    int i,  n;
    printf("Enter a No. 'n' to get n fibonacci No.\n");
    scanf("%d",&n);
    for (i = 0; i <n; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}

int fibonacci(int t)
{
    if ( t<2)
    {
        return t;
    }
    return fibonacci(t - 1) + fibonacci(t- 2);
}