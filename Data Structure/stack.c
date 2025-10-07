#include<stdio.h>
#define MAX 5
int stack[MAX],top=-1;
void push(int n)
{
	if (top==MAX-1)
	{
		printf("stack Overflow");
	}
	else
	{
		stack[++top]=n;
		printf("%d pushed to stack",n);
	}
}
void pop()
{
	if(top==-1)
	{
		printf("Stack underflow!");
	}
	else
	{
		printf("%d popped from stack",stack[top-1]);
	}
}
void display()
{
	if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{
		printf("stack elements are: ");
		for(int i=top;i>=0;i--)
		{
			printf("%d",stack[i]);
		}
		printf("\n");
	}	
}
int main()
{
	int choice,n;
	while(1)
	{
		printf("\n~~~STACK MENU~~~\n");
		printf("1.push\n2.pop\n3.display\n4.exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter value to push: ");
				scanf("%d",&n);
				push(n);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				return 0;
			default:
				printf("invalid choice! Try again.\n");
		}
	}
}; 
