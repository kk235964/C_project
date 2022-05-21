#include<stdio.h>
#include<math.h>
int main()
{
    int i,k,j,n;
   do
   {
       n=0;
    printf("Enter a no.\n");
    scanf("%d",&i);
         for(j=2;j<=sqrt(i);j++)
         {
             
             k=i%j;
             if(k==0)
             n++;
             else 
             continue;
             if(n>0)
             break;
         }
        if(i%2!=0&&n==0)
        printf("%d is a prime No.\n",i);
       
        else if(i%2!=0&&n>0)
        printf("You have entered a non-prime odd No.\n");
        else
        printf("You have entered a Even No.\n");
   }
   while (n!=0);
   
    return 0;
}