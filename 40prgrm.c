#include<stdio.h>

int main(){
    int i,j,t,n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      
        for(j=0;j<n-i-1;j++)
        {
            printf(" ");
        }
        for(t=0;t<=i;t++)
        {
        printf("#");
        }
        printf("\n");
    }
    
    
    return 0;
}