#include<stdio.h>

int main(){
    int *ptr1,*ptr2,i,j,sum,arr[5];
    ptr1=&i;
    ptr2=&j;
    printf("Enter the first No.:\n");
    scanf("%d",ptr1);
     printf("Enter the Second No.:\n");
    scanf("%d",ptr2);
    sum=*ptr1+*ptr2;
    printf("Sum of the two no. is : %d\n",sum);
    for(i=0;i<5;i++)
    {
    printf("Enter %d No.\n",i+1);
    scanf("%d",&arr[i]);
    }
     for(i=0;i<5;i++)
    {
    printf("%d ",arr[i]);
    
    }
    return 0;
}