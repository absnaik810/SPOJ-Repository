#include<cstdio>
#include<vector>
#include<cstring>
#include<cstdlib>
using namespace std;

#define MAX 5000

vector< int > graph[MAX+1], graphT[MAX+1], sorted;
bool visited [MAX+1];
int ans[MAX+1], sol[MAX+1];

void reinit(int v)
{
	sorted.clear();
	for(int i=0; i<v; ++i)
	{
		graph[i].clear();
		graphT[i].clear();
		visited[i]=false;
		sol[i]=false;
	}
}

void dfs1(int S)
{
	int i=0;
	visited[S]=true;

	for(i=0; i<graph[S].size(); ++i)
		if(!visited[graph[S][i]])
			dfs1(graph[S][i]);
	sorted.push_back(S);
}

void dfs2(int S, int component)
{
	int i=0;
	visited[S]=false;
	ans[S]=component;

	for(i=0; i<graphT[S].size(); ++i)
		if(visited[graphT[S][i]])
			dfs2(graphT[S][i], component);
}

int main(void)
{
	int v, e, x, y, i;

	while(true)
	{
		scanf("%d", &v);
        	if(v==0)
        		break;
        
        	scanf("%d",&e);
		reinit(v);
        
        	while(e--)
        	{
        		scanf("%d""%d", &x, &y);
        		graph[x-1].push_back(y-1);
        		graphT[y-1].push_back(x-1);
        	}

        	for(i=0; i<v; ++i)
        		if(!visited[i])
        			dfs1(i);

        	int component=0;
		//read this one (which was encountered) : http://stackoverflow.com/questions/30395205/why-are-unsigned-integers-error-prone
        	for(int j=sorted.size()-1; j>=0; --j)
        	{
        		if(visited[sorted[j]])
        			dfs2(sorted[j], component++);
        		sol[component-1]=true;
        	}
        
        	for(i=0; i<v; ++i)
        		for(int j=0; j<graph[i].size(); ++j)
        			if(ans[i]!=ans[graph[i][j]])
				{
        				sol[ans[i]]=false;
					break;
				}
        
        	for(i=0; i<v; ++i)
        		if(sol[ans[i]])
        			printf("%d ", i+1);
        	printf("\n");
	}
        
	return 0;
}
