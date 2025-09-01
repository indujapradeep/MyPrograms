#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the %d elements in array:",n);
	for(i=0;i<n;i++) scanf("%d",&arr[i]);
	int sum=0;
	for(i=0;i<n;i++)      if(arr[i]%2==0)	sum=sum+arr[i];  
	printf("%d is the sum of even numbers in the array",sum);
}

