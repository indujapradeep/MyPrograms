#include<stdio.h>
#include<stdlib.h>

int main(){
	int head,n;
	
	printf("Enter the No of Block:");
	scanf("%d",&n);
	
	int b[n],i;
	for(i=0;i<n;i++){
		printf("Enter the Block-%d No:",i+1);
		scanf("%d",&b[i]);
	}
	
	printf("Starting Position:");
	scanf("%d",&head);
	
	int total = 0;
	for(i=0;i<n;i++){
		int cost = abs(head - b[i]);
		total += cost;
		printf("\nMoving From %d to %d (Cost : %d)",head,b[i],cost);
		head = b[i];
	}
	
	printf("\nTotal Movement:%d",total);
}
