#include<stdio.h>
int APsum(int n )
{
    APSum(n-1)=(APSum(n)+1)/2;
    if(n==1)
    {
        return 3;
    }
    return APSum(n)+APSum(n-1);
}
int main(){
    int a,d,n,i;
    // printf("Enter two no. A and D of Arithmatic Progression to get sum\n");
    // scanf("%d",&a);
    // scanf("%d",&d);
     printf("Enter n\n");
    scanf("%d",&n);
    // for (i=1;i<=n;i++)
    // {
    //     n=a+(i-1)*d;
    // }

    printf("Sum of A P is %d/n",APSum(n));

    return 0;
}