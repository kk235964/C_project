#include<stdio.h>
int Fibonacci(int n);

int main(){
    int n,i;
    printf("Enter a no. to get Fabonacci No.\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
    printf("%d ",Fibonacci(i));
    }    
    return 0;
}

int Fibonacci(int n)
{
    if(n<2)
    {
        return n;
    }
    
    return Fibonacci(n-1)+Fibonacci(n-2);
}