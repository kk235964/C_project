#include<stdio.h>

int main(){
    int i,num,k,j,n,p,arr[100];
    printf("Enter the No. n.\n");
    scanf("%d",&n);
     printf("Enter all %d No. in Ascending order .\n",n);
    for(i=0;i<n;i++)
        {
           scanf("%d",&arr[i]);
        }

    printf("NO.  before  the unknown No..\n");
    for(i=0;i<n;i++)
        {
            printf("%d\t",arr[i]);
        }
         printf("\n");
    printf("Enter  the unknown No..\n");
    scanf("%d",&num);
   
    for(j=1;j<n;j++)
    {
        if(num<arr[j])
        {
       p=j;
       break;
        }
        else
        {
            p=j+1;
        }
    }
    for(i=n+1;i>=p;i--)
        {
           arr[i]=arr[i-1]; 
        }
        arr[p]=num;
    
     printf("NO. after the unknown No..\n");
    for(k=0;k<n+1;k++)
        {
            printf("%d\t",arr[k]);
        }

    return 0;
}