#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the %d elements in array:",n);
	for(i=0;i<n;i++) scanf("%d",&arr[i]);
	int sum=0,count=0;
	for(i=0;i<n;i++)      if(arr[i]>0)   
	{
		sum=sum+arr[i];
		count++;	
	}
	printf("%d is the Average of all positive numbers",sum/count);
}

