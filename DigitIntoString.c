#include<stdio.h>
int main()
{
	int n;
	printf("Enter a digit from 0 to 9:");
	scanf("%d",&n);
	printf("Converting the digit %d into string\n",n);
	printf("The String of the digit is ");
	if(n==0)	    printf("Zero");
	else if(n==1)	printf("One");
	else if(n==2)	printf("Two");
	else if(n==3)	printf("Three");
	else if(n==4)	printf("Four");
	else if(n==5)	printf("Five");
	else if(n==6)	printf("Six");
	else if(n==7)	printf("Seven");
	else if(n==8)	printf("Eight");
	else if(n==9)	printf("Nine");
	else 		    printf("Invalid digit");
}
