#include<stdio.h>
int a,b,u,v,i,j,n,ne=1,min,visited[10]={0},mincost=0,c[10][10];
int main()
{
	printf("Enter the number of nodes: ");
	scanf("%d",&n);
	printf("Enter the cost adjacency matrix: ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&c[i][j]);
			if(c[i][j]==0)
			 c[i][j]=999;
		}
	}
	visited[0]=1;
	printf("The edges of the minimum cost spanning tree are: ");
	while(ne<n)
	{
		for(i=0,min=999;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(c[i][j]<min&&visited[i]&&!visited[j])
				{
					min=c[i][j];
					a=u=i;
					b=v=j;
				}
			}
		}	
	
		if(!visited[v])
		{
				printf("Edge %d:(%d->%d)\tCost:%d",ne++,a,b,min);
				mincost+=min;
				visited[v]=1;
		}
		c[a][b]=c[b][a]=999;
	}		
	
	printf("\n\nMinimum cost=%d\n",mincost);
	return 0;
}							 
