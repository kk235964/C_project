#include<stdio.h>

int main(){
    int i;
    char str[50];
    printf("Enter Your Name: ");
    // scanf("%s",str);
    // printf("Your name is %s",str);
    gets(str);
    printf("Your name is ");
    puts(str);

    return 0;
}