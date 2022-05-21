#include <stdio.h>
int main()
{
    int a,b,c=1;
    printf("Enter a no.\n");
    scanf("%d",&a);
    while (a!=0)
    {
        b=a%10;
        c=c*b;
        a=a-b;
        a=a/10;
    }
    printf("The product of digit is %d\n",c);

    return 0;
}