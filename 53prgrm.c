#include<stdio.h>
void strslc(char *str,int m,int n);

int main(){
    char str[]="kamal";
    printf("Sliced part of the string is: ");
    strslc(str,0,3);
    return 0;
}
void strslc(char *str,int m, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        str[i]=str[i+m];
        printf("%c",str[i]);
    }
}