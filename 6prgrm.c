#include<stdio.h>
int main()
{
	float basic,gross,hra,da;
	printf("Please Enter your Basic Salary.\n");
	scanf("%f",&basic);

	if(basic<1500)
	{
		hra=0.1*basic;
		da=0.9*basic;
		gross=basic+hra+da;
		printf("Your Gross Salary is %.2f\n",gross);
	}
	else if(basic>=1500)
	{
		hra=500;
		da=0.98*basic;
		gross=basic+hra+da;	
		printf("Your Gross Salary is %.2f\n",gross);
	}
	return 0;
}