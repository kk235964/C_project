#include<stdio.h>
#include<math.h>
int main()
{
    int n,b;
    
    do
    {
        printf("Enter n no. greater than 0 \n");
        scanf("%d",&n);
        if (n%2==0)
        {
            printf("Square of entered No. is %d\n",n*n);
        }
            else
            printf("Square root of entered No. is %0.2f\n",sqrt(n));
        }
        while (n>0);
    
        
    


    return 0;

}