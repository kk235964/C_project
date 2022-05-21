#include<stdio.h>

int main(){
    FILE *ptr;
    int num=45;
    ptr=fopen("Generated.txt","w");
    scanf("%s",getc(ptr));
    fprintf(ptr,"The no. is %d\nCan you please enter a new no. for the best experience", num);
    return 0;
}