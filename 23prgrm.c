#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<=9;i++)
    {
        for(j=0;j<9-i;j++)
        {
            printf(" ");
        }
        for(j=0;j<i;j++)
        {
            printf("%d",i);
            printf(" ");
        }
        printf("\n");
    }
    
    


return 0;
}