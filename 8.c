//Write a program to check whether the given number is even or odd using a bitwise operator.
#include<stdio.h>
int main()
{
	int number;
	printf("Enter a number: ");
	scanf("%d",&number);
	
	number&1?printf("%d is odd",number):printf("%d is even",number);

return 0;
}

