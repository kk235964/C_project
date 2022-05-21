#include <stdio.h>
int main ()
{
    int i,a,f=1;
    printf("Enter a no.\n");
    scanf("%d",&a);
    for (i=1;i<=a;i++)
    {f=f*i;}
        printf("FActorial is %d\n",f);
    return 0;

}