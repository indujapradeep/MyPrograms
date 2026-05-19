#include<stdio.h>

int main(){
	int n,i,qt;
	
	printf("Enter the No. of Processes:");
	scanf("%d",&n);
	
	int bt[n],wt[n],tat[n],rem[n];
	
	for(i=0;i<n;i++){
		printf("Enter Process-%d Burst Time :",i+1);
		scanf("%d",&bt[i]);
		rem[i] = bt[i];
	}
	
	printf("\nEnter the quantum time:");
	scanf("%d",&qt);
	
	int completed = 0,time = 0;
	
	while(completed < n){
		for(i=0;i<n;i++){
			if(rem[i] == 0)			continue;
				if(rem[i] <= qt){
					time+=rem[i];
					rem[i] = 0;
					completed++;
					tat[i] = time;
					wt[i] = tat[i] - bt[i];
				}
				else{
					rem[i]-=qt;
					time+=qt;
				}
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
	float avg_wt  = avg_tat   / n;
	
	printf("\nAverage Waiting Time is %f",avg_wt);
	printf("\nAverage Turn Around Time is %f",avg_tat);
}
