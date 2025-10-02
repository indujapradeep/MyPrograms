#include<string.h>
#include<stdio.h>

int main()
{	
	int n;
	char str[10];
	printf("Enter a String:");
	scanf("%s",str);
	n=strlen(str);
	printf("The length of the String is %d",n);
	getch();	
}
