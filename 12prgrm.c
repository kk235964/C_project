#include<stdio.h>
int main()
{
    int a,b;
    int c;
    printf("Enter your operation in this format: A+B , you can use +,-,*,/,%%\n");
    scanf("%d%c%d",&a,&c,&b);
    switch(c)
    {
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        printf("%d",a/b);
        break;
        case '%':
        printf("%d",a%b);
        break;
        }
    return 0;
}