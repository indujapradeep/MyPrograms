#include<stdio.h>
#include<stdlib.h>

int main(){
	int head,n;
	
	printf("Enter the No of Block:");
	scanf("%d",&n);
	
	int b[n],i,j;
	for(i=0;i<n;i++){
		printf("Enter the Block-%d No:",i+1);
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(b[i] < b[j]){
				int temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
		}
	}
	
	printf("Starting Position:");
	scanf("%d",&head);
	
	int left=0;
	while(b[left] <= head){
		left++;
	}
	
	
	int total = 0;
    for(i=left;i<n;i++){
		int cost = abs(head - b[i]);
		total += cost;
		printf("\nMoving From %d to %d (Cost : %d)",head,b[i],cost);
		head = b[i];
	}
	int cost = abs(head - 0);
	total += cost;
	printf("\nMoving From %d to 0 (Cost : %d)",head,cost);
	head = 0;
	for(i=0;i<left;i++){
		int cost = abs(head - b[i]);
		total += cost;
		printf("\nMoving From %d to %d (Cost : %d)",head,b[i],cost);
		head = b[i];
	}
	
	printf("\nTotal Movement:%d",total);
}
