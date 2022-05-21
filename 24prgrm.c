#include<stdio.h>
int main()
{
    int i,j,k;
    for(2==2;;)
    {
    printf("Enter a no.\n");
    scanf("%d",&i);
    if(i%2==0)
    {
        printf("You have Entered a even No.\n");
    continue;
    }
    for(j=2;j<=100;j++)
    {
        if(i==j)
        {continue;}
        k=i%j;
        if (k!=0)
        {
            continue;
        }

    else if(i%2!=0&&k==0)
    {
        printf("You have entered a non-prime odd number\n");
    continue;
    }
    else if(k!=0)
    printf("YOu have entered a Prime NO.\n");
    
    }
    
    }
    return 0;

}