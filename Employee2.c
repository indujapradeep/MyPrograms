#include<stdio.h>
#include<stdlib.h>
struct Employee
{
	int idNumber;
	char name[100];
	char city[100];
	int deptNumber;
	struct Attendance *start;
	struct Employee *next;
};

struct Attendance
{
	int day;
	int status;
	struct Attendance *next;  // 0 refers to Absent and 1 refers to Present
};

struct Employee *insert(struct Employee *start)
{	
	struct Employee *nn=NULL;
	struct Employee *ptr=NULL;
	nn=(struct Employee*)malloc(sizeof(struct Employee));
	printf("Enter the ID_NO:");
	scanf("%d",&nn->idNumber);
	printf("Enter your Name:");
	scanf("%s",&nn->name);
	printf("Enter your City:");
	scanf("%s",&nn->city);
	printf("Enter your Department No:");
	scanf("%d",&nn->deptNumber);
	nn->next=NULL;
	if(start==NULL)
	{
		start=nn;			
	}			
	else
	{
		ptr=start;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=nn;
	}
	return start;
	
}
struct Attendance* printAttendance(struct Attendance *start)
{
	struct Attendance *ptr=NULL;
	ptr=start;
	while(ptr!=NULL)
	{
		printf("Day:%d \nStatus:%s \n",ptr->day,(ptr->status==0?"Absent":"Present"));
		ptr=ptr->next;
    }
}

struct Employee* print(struct Employee *start)
{
	struct Employee *ptr=NULL;
	ptr=start;
	int idNo;
	printf("Enter your ID_NO to print:");
	scanf("%d",&idNo);
	while(ptr!=NULL)
	{
		if(ptr->idNumber==idNo)
		{
			printf("Name:%s \nCity:%s \nDepartment No:%d \n",ptr->name,ptr->city,ptr->deptNumber);
			printAttendance(ptr->start);
			break;
		}
		ptr=ptr->next;
    }
}

struct Attendance* insertAttendance(struct Attendance* start)
{
	struct Attendance *nn=NULL;
	struct Attendance *ptr=NULL;
	nn=(struct Attendance*)malloc(sizeof(struct Attendance));
	printf("Enter the day:");
	scanf("%d",&nn->day);
	printf("Enter the status[0-Absent/1-Present]:");
	scanf("%d",&nn->status);
	nn->next=NULL;
	if(start==NULL)
	{
		start=nn;			
	}			
	else
	{
		ptr=start;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=nn;
	}
	return start;
		
}
struct Employee* mark(struct Employee *start)
{
	
	struct Employee *ptr=NULL;
	struct Employee *selected=NULL;
	ptr=start;
	int idNo;
	printf("Enter your ID_NO to mark attendance:");
	scanf("%d",&idNo);
	while(ptr!=NULL)
	{
		if(ptr->idNumber==idNo)
		{	
			printf("\n-------SELECTED EMPLOYEE-------");
			printf("\nName:%s \nCity:%s \nDepartment No:%d \n",ptr->name,ptr->city,ptr->deptNumber);
			ptr->start=insertAttendance(ptr->start);
			break;
			
		}
		ptr=ptr->next;
    }
}

int main()
{
	struct Employee *start=NULL;
	int n;
	printf("MENU\n1.Add Employee Details \n2.Print Employee Details \n3.Mark Attendance \n4.Exit\n");
	while(1)
	{
		printf("\nEnter Your Choice:");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				start=insert(start);
				break;
			case 2:
				print(start);
				break;
			case 3:
				mark(start);
				break;
			case 4:
				printf("Exiting.....");
				exit(0);
		}
    }
    return 0;
}


