#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
};
int main()
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
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%d->",ptr->data);
		ptr=ptr->next;
	}
	
}


