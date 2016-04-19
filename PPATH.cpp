#include<stdio.h>
#include<list>
#include<queue>
#include<vector>
#include<math.h>
using namespace std;

bool isPrime(int num)
{
	int i=3,check;
	if(num%2==0)
		return false;

	check=(int)sqrt(num);
	for(i=3;i<=check;i=i+2)
		if(num%i==0)
			break;

	if(i<=check)
		return false;
	else
		return true;
}

class Graph
{
	int V;
	list<int> *adj;
	public:
		Graph(int V);
		void addEdge(int u, int v);
		void bfs(int start, int end);
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

void Graph::bfs(int start, int end)
{
	queue<int> q;
	int i,top;
	bool visited[V];
	int prev[V];
	for(i=0;i<V;i++)
		visited[i]=false;
	for(i=0;i<V;i++)
		prev[i]=-1;

	q.push(start);
	visited[start]=true;

	while(q.empty()==false)
	{
		top=q.front();
		q.pop();
		
		if(top!=end)
		{
			while(adj[top].empty()==false)
			{
				if(visited[adj[top].front()]==false)
				{
					q.push(adj[top].front());
					visited[adj[top].front()]=true;
					prev[adj[top].front()]=top;		
					adj[top].pop_front();
				}
				else
					adj[top].pop_front();
			}
		}
	}

	i=end;
	int counter=0;
	while(i!=start)
	{
		counter++;
		i=prev[i];
	}
	
	printf("%d\n",counter);
}

void build(Graph g)
{
	int i,j,numU,numT,numH,numTh;

	for (i=1000; i<10000; i++)
	{
		if(isPrime(i)==false)
			continue;
		else
		{
			numU=i%10;		//4
			numT=(i%100)/10;	//3
			numH=(i/100)%10;	//2
			numTh=(i/100)/10;	//1

			for(j=numTh;j<=9;j++)
				if(isPrime(j*1000+numH*100+numT*10+numU)){
					g.addEdge(i,j*1000+numH*100+numT*10+numU);
				}

			for(j=numH;j<=9;j++)
				if(isPrime(numTh*1000+j*100+numT*10+numU)){
					g.addEdge(i,numTh*1000+j*100+numT*10+numU);
				}

			for(j=numT;j<=9;j++)
				if(isPrime(numTh*1000+numH*100+j*10+numU)){
					g.addEdge(i,numTh*1000+numH*100+j*10+numU);
				}

			for(j=numU;j<=9;j++)
				if(isPrime(numTh*1000+numH*100+numT*10+j)){
					g.addEdge(i,numTh*1000+numH*100+numT*10+j);
				}
		}

	}
}

int main()
{
	int t, num1, num2;
	scanf("%d",&t);
	Graph g(30000);

	while(t--)
	{
		scanf("%d %d", &num1, &num2);
		build(g);
		g.bfs(num1, num2);
	}

	return 0;
}
