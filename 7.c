//Write a program to find the position of first 1 in LSB.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("LSB = %d",n&1);
return 0;
}

