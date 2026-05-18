#include <stdio.h>

int main(){
	int n,i;
	
	printf("Enter the Number of Process:");
	scanf("%d",&n);
	
	int bt[n],wt[n],tat[n];
	
	for(i=0;i<n;i++){
		printf("Enter the Burst Time for Process-%d:",i+1);
		scanf("%d",&bt[i]);
	}
	
	for(i=0;i<n;i++){
		if(i==0){
			wt[i] = 0;
			tat[i] = bt[i];
		}
		else{
			wt[i] = tat[i-1];
			tat[i] = wt[i] + bt[i];
		}
	}
	
	float total_tat = 0, total_wt = 0;
	printf("\nProcess_No             Burst_Time               Waiting_Time          Turnaround_Time");
	for(i=0; i<n; i++){
    	printf("\nProcesss-%d                %d                        %d                       %d",i+1,bt[i],wt[i],tat[i]);
	    total_tat += tat[i];
	    total_wt  +=  wt[i];
	}
	float avg_tat = total_tat / n;
	float avg_wt  = total_wt   / n;
	
	printf("\nAverage Waiting Time is %f",avg_wt);
	printf("\nAverage Turn Around Time is %f",avg_tat);
}
