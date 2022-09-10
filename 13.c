//Write a program to take a three-digit number from the user and rotate its digits by 
//one position towards the right
#include<stdio.h>
int main(){
	int num,rev,rem=0;
	printf("Enter three digits number: ");
	scanf("%d",&num);
	rev = num % 10;
	num /= 10;
	rev *= 100;
	rev += num;
	printf("after rotation: %d", rev);
}