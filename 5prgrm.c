#include<stdio.h>
int main()
{
	float f,c;
	printf("Enter the temperature in Celsius:\n");
	scanf("%f",&c);
	f=c*1.8+32;
	printf("Temperature in fehrenheit is %.2f\n",f);
	return 0;
}
	