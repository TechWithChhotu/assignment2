// Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.

#include<stdio.h>
int main()
{
	float IND_price,USD_price;
	printf("Enter india price to convert USD: ");
	scanf("%f",&IND_price);
	
	USD_price=IND_price/76.23;
	printf("USD = %0.1f $",USD_price);

return 0;
}

