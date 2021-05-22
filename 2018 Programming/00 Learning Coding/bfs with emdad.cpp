// bfs (breadth first search)
#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main()
{
	int vertex, edge, i, j, k, b, e;
	printf("Enter the number of vertex and edge: 6 8 \n");

	vertex = 6, edge = 8;
	//scanf("%d%d", &vertex, &edge);
	vector < int >list[vertex + 1];

	printf("Enter the connected vertex \n");
	for (i = 0; i < edge; i++)
	{
		scanf("%d %d", &b, &e);
		list[b].push_back(e);
		list[e].push_back(b);
	}

	/////////////////showing adjecncy list/////////////////

	for(i = 1; i<=vertex; i++){
        printf("Adjacency list of the vertext %d : ", i);
        for(int j =0; j<list[i].size(); j++){
            int x = list[i][j];
            cout<<" " << x ;
        }
        printf("\n");
	}
	printf("\n");

	///////////starting bfs///////////////
	printf("Starting BFS ");

	queue < int >que;
	int distance[vertex + 1];
	bool visited[vertex + 1];
	for(i=1; i<=vertex; i++)
	    distance[i]=-1, visited[i]=false;

	visited[1] = true;
	distance[1] = 0;
	que.push(1);
	while (!que.empty())
	{
		int s = que.front();
		que.pop();
	    // process node s
	    printf("%d ",s);
	    for (i=0; i<list[s].size(); i++)
		{
			if (visited[list[s][i]])
				continue;
			visited[list[s][i]] = true;
			distance[list[s][i]] =distance[s] +1;
			que.push(list[s][i]);
		}
	}
	printf("\n\n");
	 int c = 0;
	while (1)
	{
		printf("Enter the vertex/ node number: ");
		scanf("%d", &k);
		if (distance[k] >= 0)
		{
			printf("Distance between vertex 1 and  vertex %d is = %d\n\n",k,distance[k]);
		}
		else
			printf("No connetction between vertex 1 and  bertex %d\n\n",k);
	}
	return 0;
}
