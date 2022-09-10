/* Write a program to input a number from the user and also input a digit. Append a 
digit in the number and print the resulting number. (Example - number=234 and 
digit=9 then the resulting number is 2349)
*/
#include<stdio.h>
int main()
{
	int number,append;
	printf("Enter a number: ");
	scanf("%d",&number);
	printf("Enter appending digit: ");
	scanf("%d",&append);
	number*=10;
	number+=append;
	printf("after appending number is %d",number);
return 0;
}

