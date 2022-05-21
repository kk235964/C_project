#include<stdio.h>
#include<string.h>
void reverse(char *str);

int main(){
    char str[100];
    printf("Enter the sentence: ");
    gets(str);
    reverse(str);
    printf("%s",str);

    return 0;
}

void reverse(char *str)
{ int l,i,j=0;
char temp[100];
    l=strlen(str);
    printf("%d\n",l);
    for(i=0;i<l;i++)
    {
        temp[i]=str[i];
    }
 
    for(i=0;i<l;i++)
    {
        
        str[i]=temp[l-1-i]; 

    }
   
}