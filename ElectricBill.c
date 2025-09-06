#include<stdio.h>
void main()
{
	int unit,bill;
	printf("Enter your units consumed:");
	scanf("%d",&unit);
	if(unit>0 && unit<=100)      bill=unit*5;
	else if(unit<=200)           bill=unit*7;
	else                         bill=unit*10;
	printf("The Total Bill is %d",bill);
}
