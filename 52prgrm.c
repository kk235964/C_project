#include<stdio.h>
int strlen(char *str);

int main(){
    char str[100];
    printf("Enter your Name: ");
    gets(str);
    int l=strlen(str);
    printf("The length of the string is %d",l);
    return 0;
}
int strlen(char *str)
{
    char *ptr;
    
    ptr=str;
    int len=0;
    while(*ptr!='\0')
    {
        len++;
        ptr++;
    }
    return len;

}