// Write a program to input a three-digit number and display the sum of the digits.
#include<stdio.h>
int main(){
	int number,sum=0;
	printf("Enter three digit number: ");
	scanf("%d",&number);
	
	sum+=number%10;
	number/=10;
	sum+=number%10;
	number/=10;
	sum+=number%10;
	number/=10;
	printf("sum of three digits = %d",sum);

return 0;
}

