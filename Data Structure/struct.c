#include<stdio.h>
struct employee
{
	int emp_id;
	char name[50];
	float salary;
};

int main()
{
	struct employee e[3];
	int i;
	printf("Enter the details of 3 employees \n");
	for(i=0;i<3;i++)
	{
		printf("\nemployee %d:\n ",i+1);
		printf("Enter employee id: ");
		scanf("%d",&e[i].emp_id);
		printf("enter the name: ");
		scanf("%s",e[i].name);
		printf("enter the salary: ");
		scanf("%f",&e[i].salary);
	}
	printf("\n----Employee Details----\n");
	for(i=0;i<3;i++)
	{
		printf("\nEmployee %d\n",i+1);
		printf("Employee id: %d\n",e[i].emp_id);
		printf("Employee name: %s\n",e[i].name);
		printf("Employee salary: %f\n",e[i].salary);
	}
}		
	
