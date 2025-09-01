#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the %d elements in array:",n);
	for(i=0;i<n;i++) scanf("%d",&arr[i]);
	int product=1;
	for(i=0;i<n;i++)      if(arr[i]!=0)		product=product*arr[i];  
	printf("%d is the product of all non-zero elements",product);
}

