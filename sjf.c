struct Process{
	int process_no;
	int wt;
	int tat;
	int bt;
};

#include <stdio.h>

int main(){
	int n,i,j;
	
	printf("Enter the Number of Process:");
	scanf("%d",&n);
	
	struct Process  p[n];
	
	for(i=0;i<n;i++){
		printf("Enter the Burst Time for Process-%d:",i+1);
		scanf("%d",&p[i].bt);
		p[i].process_no = i+1;
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(p[i].bt < p[j].bt){
				struct Process temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			}
		}
	}
	for(i=0;i<n;i++){
		if(i==0){
			p[i].wt = 0;
			p[i].tat = p[i].bt;
			
		}
		else{
			p[i].wt = p[i-1].tat;
			p[i].tat = p[i].wt + p[i].bt;
		}
	}
	
	float total_tat = 0, total_wt = 0;
	printf("\nProcess_No             Burst_Time               Waiting_Time          Turnaround_Time");
	for(i=0; i<n; i++){
    	printf("\nProcesss-%d                %d                        %d                       %d",p[i].process_no,p[i].bt,p[i].wt,p[i].tat);
	    total_tat += p[i].tat;
	    total_wt  +=  p[i].wt;
	}
	float avg_tat = total_tat / n;
	float avg_wt  = total_wt   / n;
	
	printf("\nAverage Waiting Time is %f",avg_wt);
	printf("\nAverage Turn Around Time is %f",avg_tat);
}
