#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter a value of A:");
	scanf("%d",&a);
	printf("Enter a value of B:");
	scanf("%d",&b);
	printf("Before Swapping");
	printf("\nA=%d   B=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter Swapping");
	printf("\nA=%d   B=%d",a,b);
	
}


