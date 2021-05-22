//adjacency matrix
#include<stdio.h>

int main()
{
	int vertex, edge, i,j,k,b,e;
	printf("Enter the number of vertex and edge: ");
	scanf("%d %d",&vertex, &edge);
	int matrix[vertex+1][vertex+1];

	for(i=0; i<edge; i++)
	{
		scanf("%d %d",&b, &e);
		matrix[b][e]=1;
		matrix[e][b]=1;
	}
	int c=0;
	while(1)
	{
		printf("Enter the vertex/ node number: ");
		scanf("%d",&k);
		for(i=1; i<=vertex; i++)
		{
			if(matrix[k][i]==1) c++, printf("%d ",i);
		}
		if(c>0) printf("\n\n");
		else printf("No other vertex connected.\n\n");
	}
	return 0;
}
