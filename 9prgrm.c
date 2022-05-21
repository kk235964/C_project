#include<stdio.h>
int main()
{
    int a,s;
    printf("Enter a year of your choice.\n");
    scanf("%d",&a);
    s=a%4;
    if(s==0)
    printf("You have entered a leap year which has 366 days in a year.\nThank You!!\n");
    else 
    printf("You have entered a non-leap year which has 365 days in a year.\nThank You!!\n");
    return 0;

}