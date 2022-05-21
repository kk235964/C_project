#include<stdio.h>
int main()
{
	char ch1,ch2,ch3;
	printf("Welcome to my programing ..Here if you type small letter you get upper letter and vice versa...... \n");
	printf("Enter a Alphabet of your choice. \n");
	scanf("%c",&ch1);
	ch3=ch1-32;
	ch2=ch1+32;
	if (65<=ch1&&ch1<=90)
	{
		printf("%c is lowercase of %c\n",ch2,ch1);
	}
	else if(97<=ch1&&ch1<=122)
	{
		printf("%c is uppercase of %c\n",ch3,ch1);
	}
	else 
	{
		printf("Please a enter a valid Alphabet from : A-Z and a-z\n");
	}
	printf("----------------THANK YOU!---------------\n");
	return 0;
}