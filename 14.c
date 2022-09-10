//Write a program to take a three-digit number from the user and rotate its digits by 
//one position towards the left
#include<stdio.h>
int main(){
	int num,rev,rem=0;
	printf("Enter three digits number: ");
	scanf("%d",&num);
	rev = num % 100;
	num /= 100;
	rev *= 10;
	rev += num;
	printf("after rotation: %d", rev);
}