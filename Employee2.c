#include<stdio.h>
#include<stdlib.h>
struct Employee
{
	int idNumber;
	char name[100];
	char city[100];
	int deptNumber;
	struct Employee *next;
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
		}
		ptr=ptr->next;
    }
}

int main()
{
	struct Employee *start=NULL;
	int n;
	printf("MENU\n1.Add Employee Details \n2.Print Employee Details \n3.Exit\n");
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
				printf("Exiting.....");
				exit(0);
		}
    }
    return 0;
}


