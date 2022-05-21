#include<stdio.h>
int reverse(int *ptr);

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10},i,j;
    int *ptr;
    ptr=&arr[0];
    for(i=0;i<10;i++)
    {
    printf("Reverse form are: %d \n",reverse(ptr));
        ptr--;
    }


    return 0;
}
int reverse(int *ptr){
int *temp;
temp=ptr+i;
return *temp;
}