#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number to know whether it is positive,negative or zero: \n");
    scanf("%d",&num);
    if(num<0)
    {
        printf("%d is a NEGATIVE No.\n Thank You!",num);
    }
    else if(num==0)
    {
        printf("%d is a Zero\n Thank You!",num);
    }
else
{
    printf("%d is a Positive No.\n Thank You!",num);
}
    return 0;
}
