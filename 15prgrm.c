#include<stdio.h>
int main ()
{
    int m,n;
    printf("Enter two no.\n");
    scanf("%d%d",&m,&n);
    for (m=m;m<=n;m++)
    {
        if(m%2!=0)
        printf("%d   ",m);
        else
        continue;
    }
    return 0;

}