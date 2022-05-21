#include<stdio.h>
int main()
{
    int i,k,j;
    for(i=3;i<100;i++)
    {
        for(j=2;j<i;j++)
        {
            k=i%j;
            if(k!=0)
            continue;
        
        }
        if(k!=0)
        continue;
        printf("%d",i);
    }
    return 0;
}