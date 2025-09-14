#include<stdio.h>
void main()
{
	int n,i,sum=0;
	printf("Enter the number of products:");
	scanf("%d",&n);
	int price[n],quantity[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the price of the product %d:",i+1);
		scanf("%d",&price[i]);
		printf("Enter the quantity of the product %d:",i+1);
		scanf("%d",&quantity[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+price[i]*quantity[i];
	}
	printf("The Total bill is %d",sum);
}
