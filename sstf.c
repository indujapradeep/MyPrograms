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
	
	int left = 0, right = n-1;
	while( b[left] < head){
		left++;
	}
	while(b[right] > head){
		right--;
	}
	left--;
	right++;
	
	int total = 0;
    while(left >= 0 && right <= n-1){	
		int cost_left = abs(head - b[left]);
		int cost_right = abs(head - b[right]);
		if(cost_left <  cost_right){
				total += cost_left;
				printf("\nMoving From %d to %d (Cost : %d)",head,b[left],cost_left);
				head = b[left];
				left--;		
		}
		if(cost_left > cost_right){
				total += cost_right;
				printf("\nMoving From %d to %d (Cost : %d)",head,b[right],cost_right);
				head = b[right];
				right++;		
		}	
	}
	while(left >= 0){
		int cost_left = abs (head - b[left]);
		total+=cost_left;
		printf("\nMoving From %d to %d (Cost : %d)",head,b[left],cost_left);
		head = b[left];
		left--;
	}
	while(right <= n-1){
		int cost_right = abs (head - b[right]);
		total+=cost_right;
		printf("\nMoving From %d to %d (Cost : %d)",head,b[right],cost_right);
		head = b[right];
		right++;
	}
	
	
	printf("\nTotal Movement:%d",total);
}
