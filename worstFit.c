#include <stdio.h>

struct Holes{
	int blockNumber;
	int size;
	int allocated;
};

int main(){
  //int holes_list[5] = {300,400,500,100,200};
  struct Holes h[] = {
  	{1,300,0},
  	{2,400,0},
  	{3,500,0},
  	{4,100,0},
  	{5,200,0}
  };
  
  int process[5] = {230,124,340,423,100};
  int i,j,temp;

  printf("Implementation of Worst Fit:");
  for(i=0;i<5;i++){
  	for (j=0;j<5;j++){
  		if( h[i].size > h[j].size){
	  		struct Holes temp = h[i];
  			h[i] = h[j];
			h[j] = temp;
		}
	}
  }

  printf("\nProcess_No       Process_Size              Block_No              Allocated Memory Size");
  for( i=0; i<5; i++){
  	  int allocated = 0;
	  for( j=0; j<5; j++){
		  if (process[i] <= h[j].size && !h[j].allocated){
  			printf("\nProcess-%d          %d                       %d                            %d",i,process[i],h[j].blockNumber,h[j].size);
			h[j].allocated = 1;
		    allocated = 1;
		    break;
		  }
	  }
	  if(!allocated){
	  	    printf("\nProcess-%d          %d                    Not Allocated                     -",i,process[i]);  
	  }
  }
  
}

