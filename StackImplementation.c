#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
};
struct Node *create()
{	
	struct Node *start=NULL;
	struct Node *nn=NULL;
	struct Node *ptr=NULL;
	nn=(struct Node*)malloc(sizeof(struct Node));
	int i,n;
	printf("Enter the No of Element:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		nn=(struct Node*)malloc(sizeof(struct Node));
		printf("Enter the data:");
		scanf("%d",&nn->data);
		nn->next=NULL;
		if(start==NULL)
		{
			start=ptr=nn;			
		}			
		else
		{
			ptr->next=nn;
			ptr=nn;
		}
	}
	return start;
	
}
struct Node* print(struct Node *start)
{
	struct Node *ptr=NULL;
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%d->",ptr->data);
		ptr=ptr->next;
	}
	printf("NULL\n");
}
struct Node* push(struct Node *start)
{	

	struct Node *nn=NULL;
	nn=(struct Node *)malloc(sizeof(struct Node));
	printf("Enter the data value to insert:");
	scanf("%d",&nn->data);
	nn->next=NULL;
	struct Node *ptr=NULL;
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
}
struct Node* pop(struct Node *start)
{
	struct Node *ptr=NULL;
	ptr=start;
	printf("Performing POP operation:\n");
	if(ptr==NULL || ptr->next==NULL)
	{
		return NULL;
	}
	while(ptr->next->next!=NULL )
	{
		ptr=ptr->next;
	}
	ptr->next=NULL;
}
int main()
{
	struct Node *start=NULL;
	int n;
	printf("MENU\n1.Create \n2.Print \n3.Push \n4.Pop \n5.Exit");
	while(1)
	{
	printf("\nEnter Your Choice:");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			start=create();
			break;
		case 2:
			print(start);
			break;
		case 3:
			push(start);
			break;
		case 4:
			start=pop(start);
			print(start);
			break;
		case 5:
			printf("Exiting.....");
			exit(0);
	}
	}
	
}


