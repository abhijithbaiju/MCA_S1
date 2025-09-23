#include<stdio.h>
int main()
{
	int m,n,i,j,k;
	printf("Enter the Number of Rows and Columns:  ");
	scanf("%d %d",&m,&n);
	int A[m][n],B[m][n],Sum[m][n],Mul[m][n],Sub[m][n];
	printf("Enter the Elements in Matrix A: ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("Matrix 1\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d \t",A[i][j]);
		}
		printf("\n");
	}	
	printf("Enter the Elements in Matrix B: ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	printf("Matrix 2\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d \t",B[i][j]);
		}
		printf("\n");
	}	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			Sum[i][j]=A[i][j]+B[i][j];
		}
	}	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			Sub[i][j]=A[i][j]-B[i][j];
		}
	}
	if(m==n)
	{
	 	for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				Mul[i][j]=0;
				for(k=0;k<n;k++)
				{
					Mul[i][j]+=A[i][k]*B[k][j];
				}
			}
		}
	}
	printf("\nAddition: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d \t",Sum[i][j]);
		}
		printf("\n");
	}	
	printf("\nSubtraction: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d \t",Sub[i][j]);
		}
		printf("\n");
	}
	if(m==n)					
	{
		printf("\nMultiplication: \n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d \t",Mul[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("Matrix Multiplication is  not possible");
	}
};	
