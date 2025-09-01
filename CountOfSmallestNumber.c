#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the %d elements in array:",n);
	for(i=0;i<n;i++) scanf("%d",&arr[i]);
	int smallest=arr[0];
	int count=0;
	for(i=0;i<n;i++)      if(smallest>arr[i])		smallest=arr[i];
	for(i=0;i<n;i++) 	  if(smallest==arr[i])      count++; 
	printf("%d times the smallest number %d repeats",count,smallest);
}

