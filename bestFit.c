struct Holes{
	int allocated;
	int size;
	int blockNumber;
};

#include <stdio.h>

int main(){
	int np,nb,i,j;
	
	printf("Enter the Number of Process:");
	scanf("%d",&np);
	int process[np];
	
	for(i=0;i<np;i++){
		printf("Enter the size of Process %d:",i+1);
		scanf("%d",&process[i]);
	}
	
	printf("\nEnter the number of Block:");
	scanf("%d",&nb);
	struct Holes h [nb];
	
	for(i=0;i<nb;i++){
		printf("Enter the size of Block %d:", i+1);
		scanf("%d",&h[i].size);
		h[i].allocated = 0;
		h[i].blockNumber = i+1;
	}
	
	for(i=0;i<np;i++){
		for(j=0;j<np;j++){
			if(h[i].size < h[j].size){
				struct Holes temp = h[i];
				h[i] = h[j];
				h[j] = temp;
			}
		}
	}
	
	printf("\nImplementation of Best Fit");
	printf("\nProcesss_No             Process_Size             Block_No           Block_Size");
	for(i=0;i<np;i++){
		int allocated = 0;
		for(j=0;j<nb;j++){
			if(process[i] <= h[j].size && !h[j].allocated){
				printf("\nProcess-%d                   %d                    %d                    %d",i,process[i],h[j].blockNumber,h[j].size);
				allocated = 1;
				h[j].allocated = 1;
				break;
			}
		}
		if(!allocated){
			    printf("\nProcess-%d                   %d               Not Allocated              -",i,process[i]);
		}
	}
	
}

