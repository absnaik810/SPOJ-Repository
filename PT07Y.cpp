#include<stdio.h>
#include<list>
#include<stack>
using namespace std;

class Graph
{
	int V;							
	list<int> *adj;						
	public:
		Graph(int V);					
		void addEdge(int u, int v);			
		void dfs(int start);				
};

Graph::Graph(int V)
{
	this->V=V;
	adj=new list<int>[V];
}

void Graph::addEdge(int u, int v)
{
	adj[u].push_back(v);	
	adj[v].push_back(u);
}

void Graph::dfs(int start)
{
	int top,i=0;
	bool *visited = new bool[V];
	for(i=0;i<V;i++)
	{
		visited[i]=false;
	}

	stack<int> s;
	s.push(start);
	while(s.empty()==false)
	{
		top=s.top();
		s.pop();
	
		if(visited[top]==false)
		{
			visited[top]=true;
			while(!adj[top].empty())
			{
				s.push(adj[top].back());
				adj[top].pop_back();
			}
		}
	}

	for(i=0;i<V;i++)
	{
		if(visited[i]==false)
			break;
	}

	if(i<V)
	{
		printf("NO\n");
	}
	else
	{
		printf("YES\n");
	}
}


int main()
{
	int N,M,i=0,u,v,min=11111;
	scanf("%d %d",&N,&M);

	if(M!=(N-1))
	{
		printf("NO\n");
		return 0;
	}

	Graph g(N);
	for(i=0;i<M;i++)
	{
		scanf("%d %d",&u,&v);
		if((u-1)<min)
			min=u-1;
		if((v-1)<min)
			min=v-1;
		g.addEdge(u-1,v-1);
	}

	g.dfs(min);

	return 0;
}
