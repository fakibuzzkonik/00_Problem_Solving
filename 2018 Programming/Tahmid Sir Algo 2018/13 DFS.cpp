///dfs(depth first search)

#include<iostream>
#include<stdio.h>
#include<vector>
#include<utility>
using namespace std;

vector<int>vec[1005];
int vis[1005]; // all the index will be 0 by defeult.
int c=0;
void dfs(int x)
{
	if(vis[x]) return;
	printf("%d ",x);
	vis[x]=1;
	for(int i=0; i<vec[x].size(); i++)
		dfs(vec[x][i]);
}
int main()
{
	int vertex, edge,i,j,k,l, edge_start, edge_end;
	printf("Enter how many  VERTEX (NODE) and EDGE number: ");
	scanf("%d %d",&vertex,&edge);

	///taking the starting and ending vertex number of all edge.
	printf("Enter  STARTING and ENDING vertex of %d edges: \n", edge);
	for(i=0; i<edge; i++)
	{
		scanf("%d %d",&edge_start, &edge_end);
		vec[edge_start].push_back(edge_end);
		vec[edge_end].push_back(edge_start);
	}
	printf("Enter the vertex number you want to start VISITING: ");
	scanf("%d",&k);
	printf("We can VISIT these VERTICES: \n");
	dfs(k);
}
