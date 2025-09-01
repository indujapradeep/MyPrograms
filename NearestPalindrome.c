#include<stdio.h>
int Palindrome(int num)
{	
	int rev=0,digit,temp;
	temp=num;
	while(temp!=0){
		digit=temp%10;
		temp=temp/10;
		rev=rev*10+digit;
	}
	if(num==rev)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void main()
{
	int num=1678;	
	int i;
	for(i=0;;i++)
	{
		if(Palindrome(num-i)==1){
			printf("%d is the nearest Palindrome",num-i);
			break;
		}	
		else if (Palindrome(num+i)==1){
			printf("%d is the nearest Palindrome",num+i);
			break;
		}
	}
	
}
