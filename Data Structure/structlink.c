#include<stdio.h>
#include<stdlib.h>
struct  Node
{
	int data;
	struct Node*next;
};
int main()
{
	struct Node*head=NULL;
	struct Node*temp=NULL;
	struct Node*newNode=NULL;
	int n,i,value;
	printf("Enter Number of Nodes: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newNode=(struct Node*)malloc(sizeof(struct Node));
		printf("Enter data for a node %d:",i+1);
		scanf("%d",&value);
		newNode->data=value;
		newNode->next=NULL;
		if(head==NULL)
		{
			head=newNode;
			temp=head;
		}
		else
		{
			temp->next=newNode;
			temp=temp->next;
		}
	}	

printf("Singly Linked list: ");
temp=head;
while(temp!=NULL)
{
	printf("%d->",temp->data);
	temp=temp->next;
}
printf("NULL\n");	
}			
