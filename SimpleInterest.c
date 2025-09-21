#include<stdio.h>
int main()
{
	float p,r,t;
	printf("To Calculate the Interest");
	printf("\nEnter value for Principle:");
	scanf("%f",&p);
	printf("Enter vslue for rate:");
	scanf("%f",&r);
	printf("Enter value for time:");
	scanf("%f",&t);
	float i=(p*r*t)/100;
	printf("Simple Interest:%f",i);
}
