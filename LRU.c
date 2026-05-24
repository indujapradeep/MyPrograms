#include<stdio.h>
int main() {
    int i,j;
    int rs;
    
    printf("Enter the size of the reference string : ") ;
    scanf("%d",&rs);
    int ref[rs];
    
    printf("Enter the reference string : ");
    for(i=0;i<rs;i++) {
        scanf("%d",&ref[i]);
    }
    
    int fs;
    printf("Enter the frame size : ");
    scanf("%d",&fs);
    
    int frame[fs];
    int time[fs];
    for(i=0;i<fs;i++) {
        frame[i] = -1;
    }
    
    int fault = 0;
    int start = 0;
    printf("LRU Page Replacement\n");
    printf("Page   \t Frame ");
    for(i=0;i<rs;i++) {
        int found = 0;
        for(j=0;j<fs;j++) {
            if(ref[i]==frame[j]) {
                time[j] = i;
                found = 1;
                break;
            }
        }
        if(found==0) {
            if(start < fs) {
                frame[start] = ref[i];
                time[start] = i;
                start++;
            } else {
                int small = time[0];
                int index = 0;
                for(j =1;j<fs;j++) {
                    if(small>time[j]) {
                        small = time[j];
                        index = j;
                    }
                }
                frame[index] = ref[i];
                time[index] = i;
            }
            fault++;
            }
            printf("\nPage-%d\t",ref[i]);
            for(j=0;j<fs;j++) {
                	if(frame[j] == -1)	printf("- ");
		 			else        printf("%d ",frame[j]);
		 	}   
    }  
    printf("Page Fault : %d",fault);
}
