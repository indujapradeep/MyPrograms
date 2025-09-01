#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the %d elements in array:",n);
	for(i=0;i<n;i++) scanf("%d",&arr[i]);
	int count=0;
	for(i=0;i<n;i++)      if(arr[i]%2==0)	count++;  
	printf("There are %d even numbers in the array",count);
}

