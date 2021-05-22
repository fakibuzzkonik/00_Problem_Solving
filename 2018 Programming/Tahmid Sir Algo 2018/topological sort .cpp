///topological sort

#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#include<cstring>
#include<map>
#include<utility>
using namespace std;
int main()
{
	int vertex, edge;
	printf("Enter how many  VERTEX (NODE) and EDGE number: ");
	scanf("%d%d", &vertex, &edge);
	int i, j, u, v, x, c = 0, k = 0, visited[vertex + 1], indegree[vertex + 1];
	map < int, int >mp;
	vector < int >vec[vertex + 1];
	memset(indegree, 0, sizeof(indegree));

	printf("Enter VARTEX ONE and VERTEX TWO  %d times:\n",edge);
    for(i=0; i<edge; i++)
	{
		scanf("%d%d", &u, &v);
		vec[u].push_back(v);
		indegree[v]++;
	}

	while (1)
	{
		int count[vertex + 1];
		memset(count, 0, sizeof(count));
		if (c == vertex)
		{
			printf("we can visit the graph in this order:\n");
			 for (i = 0; i < vertex; i++)
			{
				if (i == vertex - 1)
					printf("%d\n", visited[i]);
				else
					printf("%d ", visited[i]);
			}
			break;
		}
		for (i = 1; i <= vertex; i++)
		{
			// printf("Step 3 indegree[%d]=%d\n",i,indegree[i]);
			if (!indegree[i] && !mp[i] && !count[i])
			{
				visited[c++] = i, mp[i] = 1;
				for (j = 0; j < vec[i].size(); j++)
					if (indegree[vec[i][j]])
						indegree[vec[i][j]]--, count[vec[i][j]] = 1;
			}
		}
	}
	return 0;
}
