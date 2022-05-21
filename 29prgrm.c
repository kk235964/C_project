#include<stdio.h>
void Number_between(int a, int b);
int main(){
    int a,b;
    printf("Enter two No. to get counting No. between them\n");
    scanf("%d",&a);
    scanf("%d",&b);
    Number_between(a,b);
    return 0;
}
void Number_between(int a, int b)
{
    int i;
    
    for(i=a;i<=b;i++)
    {
    
        printf("%d\t",i);
    }
}
