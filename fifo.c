#include<stdio.h>

int main(){
   int i,j,k,fault=0;
   int frame_size = 3;
   int frames[3] = {-1,-1,-1};
   int current_index = 0;
   int reference[8] = {7,0,1,2,0,3,0,4};
   
   printf("Page \t Frame");
   for(i=0; i<8; i++){
   	 int found = 0;
   	 for(j=0; j<3; j++){
   			if(reference[i] == frames[j]){
   				found = 1;
   				break;
			   } 	
		}
   	 if(found == 0){
	     frames[current_index] = reference[i];
		 current_index++;
		 current_index = current_index % frame_size;
		 fault++;
     }
     
	 printf("\nPage-%d\t",reference[i]);
		 for(k=0;k<frame_size;k++){
		 	if(frames[k] == -1)	printf("- ");
		 	else        printf("%d ",frames[k]);
		 }
   }
   printf("Fault Pages:%d",fault);
}
   
   
		
