#include<stdio.h>
int evensum(int i)
{
    if (i<1)
    {
        return 0;
    }
    // else if(i%2==1);
    // {
    //     return 0;
    // }
    return i+evensum(i-2);

}

int main(){
    int i,k;
    printf("Enter the term of Sum\n");
    scanf("%d",&k);
    i=2*k;
    printf("%d",evensum(i));
    
    return 0;
}