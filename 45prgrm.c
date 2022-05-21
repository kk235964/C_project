#include<stdio.h>

int main(){
    int i,j,sum=0;
    int arr[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the value of arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The Matrix of Arrays are:\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",arr[i][j]);
            sum=sum+arr[i][j];
        }
        printf("\n");
    }
    printf("The sum of boundary NO. is: %d\n",sum-arr[1][1]);
    return 0;
}