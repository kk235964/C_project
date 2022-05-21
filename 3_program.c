#include<stdio.h>
int main()
{
	float profit,cp,sp;
	float profit_percnt;
	printf("...............HELLO CANDYY..WELCOME TO MY PROGRAMMING........\n");
        printf("Enter the Cost Price: \n");
	scanf("%f",&cp);
	printf("Enter the Selling Price: \n");
	scanf("%f",&sp);
	profit=sp-cp;
 	profit_percnt=profit/cp*100;
printf("You are getting profit of Rs. %f\nAnd your profit percentage is %f\nThank You......MERI JAAN!\n",profit,profit_percnt);
 	return 0;
}

