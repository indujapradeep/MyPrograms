#include<stdio.h>
void main()
{
	int n,digit,rev;
	printf("Enter a number:");
	scanf("%d",&n);
	while(n!=0)
	{
		digit=n%10;
		n=n/10;
		printf("\nDigit:%d",digit);
	}
}
