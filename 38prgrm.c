#include<stdio.h>
int power(int n, int m){

    int i,p=1;
    for(i=1;i<=m;i++)
    {
        p=p*n;
    }
    return p;
}


int main(){
    int i,n,m,r;
    printf("Enter two No.\n");
    scanf("%d",&n);
    scanf("%d",&m);
    printf("%d",power(n,m));

 

    return 0;
}