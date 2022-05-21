#include<stdio.h>
int main()
{
	int it,as,bs,ms,hra,da,ins,pf; // Here hra=House Rent allowance, ins=Insurance, pf=Provident fund
	printf("Please Enter your Basic salary.\n");
	scanf("%d",&bs);
	pf=0.10*bs;
	ins=0.12*bs;
	hra=0.25*bs;
	da=0.115*bs; // Here da=Dearness allowance, bs=Basic Salary
	ms=bs+hra+da-ins-pf;
	as=ms*12;	//Here as=Annual Salary, ms=Monthly Salary
	if(as<=250000)
	{
		printf("Your Annual Income Tax is Rs. 0\n");
	}
	else if(as>250000&&as<=500000)
	{
		it=0.10*as;
		printf("Your Annual Income Tax is Rs. %d\n",it);
	}
	else if(as>500000&&as<=1000000)
	{
		it=0.20*as;
		printf("Your Annual Income Tax is Rs. %d\n",it);
	}
	else if(as>1000000)
	{
		it=0.30*as;
		printf("Your Annual Income Tax is Rs. %d\n",it);
	}
	return 0;
}
