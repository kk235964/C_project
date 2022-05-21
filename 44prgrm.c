#include<stdio.h>

int main(){
    int i,j,C[10],A[5]={1,2,3,4,5},B[5]={6,7,8,9,10};
     printf("The values in Array A are:\n");
     for(i=0;i<=4;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
    printf("The values in Array B are:\n");
     for(i=0;i<=4;i++)
    {
        printf("%d ",B[i]);
    }
    printf("\n");

    for(i=0;i<=8;)
    {
        C[i]=A[i/2];
        i=i+2;
    }
     for(i=1;i<=9;)
    {
        
        C[i]=B[i/2-1/2];
        i=i+2;
    }
        printf("The values in Array C are:\n");
    for(i=0;i<=9;i++)
    {
        printf("%d ",C[i]);
    }
    
    return 0;
}