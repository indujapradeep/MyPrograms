#include<stdio.h>
int reverse(int x)
{
	int digit,rev=0;
	while(x!=0)
	{
		digit=x%10;
		x=x/10;
		rev=rev*10+digit;
	}
	return rev;
}
int main()
{
	int a,b;
	printf("Enter a Number:");
	scanf("%d",&a);
	printf("Enter a Number:");
	scanf("%d",&b);
	printf("Reverse of %d is %d",a,reverse(a));
	printf("\nReverse of %d is %d",b,reverse(b));
}
