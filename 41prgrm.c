#include <stdio.h>

int main()
{
    int i,bigger,k, small, j, arr[5];
    printf("Enter 5 No.\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    small = arr[0];
    for (j = 1; j < 5; j++)
    {

        if (arr[j] < small)
            
        {
            small = arr[j];
        }
    }
    printf("Smallest No. is %d\n", small);

    bigger = arr[5];
    for (k = 4; k >0; k--)
    {

        if (arr[k] > bigger)
        {
            bigger = arr[k];
        }
    }
    printf("Biggest No. is %d\n", bigger);

    return 0;
}