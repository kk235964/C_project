#include<stdio.h>
typedef struct Comp
{
    int real;
    int img;
}Comp;


int main(){
    Comp a,b;
    
    printf("Enter the value of Real part: ");
    scanf("%d",&a.real);
      printf("Enter the value of Imaginary part: ");
    scanf("%d",&b.img);
    printf("The complex No. you have entered is %d+i%d",a.real,b.img);
    return 0;
}