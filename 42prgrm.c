#include<stdio.h>

int main(){
    int i,j,k,arr[15];
    printf("Enter 15 No.\n");
    for(i=0;i<15;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<15;j++)
    {
        if(j%2!=0)
        k=k+arr[j];

    }
    printf("Total sum of even places:%d\n",k);
    return 0;
}