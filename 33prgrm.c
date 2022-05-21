#include<stdio.h>
#include"factorial.h"
int factorial(int n);

int main(){
    int r,n;
    printf("Enter two No, to get nCr of that \n");
    scanf("%d",&n);
    scanf("%d",&r);
    printf("nCr of (%d and %d) is:",n,r);
    printf("%d",factorial(n)/(factorial(r)*factorial(n-r)));


    return 0;
}


