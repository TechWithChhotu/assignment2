/*Write a program to make the last digit of a number stored in a variable as zero. 
(Example - if x=2345 then make it x=2340)*/
#include<stdio.h>
int main()
{
	int num,rem;
	printf("Enter a numbar: ");
	scanf("%d",&num);
	rem=num%10;
	num-=rem;
	printf("number = %d",num);
return 0;
}

