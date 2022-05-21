#include<stdio.h>
void encrypt(char *str);

int main(){
    char str[100];
    printf("Enter your Message to Encrypt: ");
    gets(str);
    
    printf("Your encrypted Message is: ");
    encrypt(str);
    return 0;
}
void encrypt(char *str)
{
    int i=0;
    char *ptr;
    ptr=str;
    while(*ptr!='\0')
    {
        str[i]=str[i]+1;
    // printf("%c",str[i]);
        i++;
        ptr++;
        
    }
    puts(str);
}