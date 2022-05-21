#include<stdio.h>

int main(){
    int arr[3][3],i,j,sum=0;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
    {
        {
            printf("Enter the value of arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
            if(i==j)
            sum=sum+arr[i][j];
        }
    }
    printf("The sum of diagonals is: %d ",sum);
    return 0;
}