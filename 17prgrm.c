#include<stdio.h>
int main()
{
    int i;
    float a;
    printf("Enter a number.\n");
    scanf("%f",&a);
    for(i=1;i<100;i++)
    {
        a=a/10;
        if(a<10)
        break;
    }
    printf("Entered No. has %d digit\n",i+1);
    return 0;
}