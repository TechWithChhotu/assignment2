//Write a program to print a given number without its last digit.
#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("\n\t%d",num/10);
    return 0;
}
