#include<stdio.h>
int main()
{
	int a[10],b[10],c[20],x,y;
	printf("Enter the number of elements in 1 array: ");
	scanf("%d",&x);
	printf("Enter the elements in 1 array: ");
	for(int i=0;i<x;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number of elements in 2 array: ");
	scanf("%d",&y);
	printf("Enter the elements in 2 array: ");
	for(int i=0;i<y;i++)
	{
		scanf("%d",&b[i]);
	}
         
	for(int i=0;i<x;i++)
	{
		c[i]=a[i];
	}
	for(int i=0;i<y;i++)
	{
		c[x+i]=b[i];
	}
	int n=x+y;
	printf("Merged array: ");
	for(int i=0;i<n;i++)
	{
		printf("%d",c[i]);
	}
	printf("\n");
	return 0;
}
