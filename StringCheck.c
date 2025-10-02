#include<stdio.h>
#include<string.h>

int main()
{
	char str1[10],str2[10];
	int diff;
	printf("Enter the 1st String:");
	scanf("%s",str1);
	printf("Enter the 2nd String:");
	scanf("%s",str2);
	diff=strcmp(str1,str2);
	if(diff==0)
	{
		printf("The Strings are same");
	}
	else
	{
		printf("The Strings are not same");
	}
	return 0;
}
