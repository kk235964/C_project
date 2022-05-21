#include <stdio.h>
void table(int a);

int main()
{
    int a;
    printf("Enter a No, to get table\n");
    scanf("%d", &a);
    table(a);

    return 0;
}
void table(int a)
{
    int i, j;
    for (j = 1; j <= 10; j++)
    {
        i = a * j;
        printf("%d * %d = %d\n", a, j, i);
    }
}
