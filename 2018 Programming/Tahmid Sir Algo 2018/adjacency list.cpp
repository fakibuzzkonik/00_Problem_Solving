// adjacency list
#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int vertex, edge, i, j, k, b, e;
	printf("Enter the number of vertex and edge: ");
	scanf("%d%d", &vertex, &edge);
	vector < int > list[vertex+1];

	for (i = 0; i < edge; i++)
	{
		scanf("%d %d", &b, &e);
	    list[b].push_back(e);
		list[e].push_back(b);
	}
	int c = 0;
	while (1)
	{
		printf("Enter the vertex/ node number: ");
		scanf("%d", &k);
		if (list[k].size() > 0)
		{
			for (i = 0; i <list[k].size(); i++)
			{
				 cout<<list[k][i]<<" ";
			}
			printf("\n\n");
		}
		else
			printf("No other vertex connected.\n\n");
	}
	return 0;
}
