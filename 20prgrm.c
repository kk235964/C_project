
#include<stdio.h>
int main ()
{
    int a,b,i,c=0;
    printf("Enter a no.\n");
    scanf("%d",&a);
    i=1;
    while (i<100)
    {
        b=a%i;
        i++;
        if(b==0)
            c++;
        
    }
printf("Entered No. has %d factor\n",c);
if (c==2)
printf("You have entered a Prime No. \n");
else
printf("You have entered a composit No.\n");

    return 0;

}