//Write a program to swap values of two int variables
#include<stdio.h>

int main()
{
    int a,b,temp;
    printf("Enter value of a & b: ");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("after swapping: a = %d\tb = %d",a,b);
    return 0;
}
