#include<stdio.h>

int main(){
    FILE *ptr;
    int num,num2;
    ptr=fopen("kamal.txt","r");
    fscanf(ptr,"%d",&num);
    fscanf(ptr,"%d",&num2);
    fclose(ptr);
    printf("The value of text file is: %d",num);
    printf("\nThe value of text file is: %d",num2);
    return 0;
}
    