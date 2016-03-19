#include<stdio.h>
#include<list>
#include<queue>
using namespace std;

list<long int> *adj;
long int b;
long int *color;
void addEdge(long int u, long int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

bool isBipartiite(long int num)			//1 is one color and the other is 0; -1 is default -> No color
{
	long int i,top;
	for(i=0;i<b;i++)
		color[i]=-1;
	std::list<long int>::iterator it;

	queue<long int>q;
	color[num]=1;				//color the source node with 1
	q.push(num);

	while(!q.empty())
	{
		top=q.front();
		q.pop();

		if(!adj[top].empty())
			it=adj[top].begin();
		else
			continue;
		while(it!=adj[top].end())
		{
			if(color[*it]==-1)
			{
				color[*it]=1-color[top];	//magic function -> if color[top] is 0, color[current] is 1 and vice versa
				q.push(*it);
			}
			else
				if(color[*it]==color[top])
					return false;
			++it;
		}
	}

	return true;
}

int main()
{
	int t;
	long int e,u,v,counter=1,i;
	bool ans;
	scanf("%d",&t);

	while(t--)
	{
		scanf("%ld %ld",&b,&e);
		adj=new list<long int>[b];
		color=new long int [b];
		while(e--)
		{
			scanf("%ld %ld",&u,&v);
			addEdge(u-1,v-1);
		}

		ans=isBipartiite(0);

		if(ans)
		{
			for(i=0;i<b;i++)
			{
				if(color[i]==-1)
				ans=isBipartiite(i);
				if(ans==false)
					break;
			}
		}

		if(ans)
		{
			printf("Scenario #%ld:\n",counter);
			counter++;
			printf("No suspicious bugs found!\n");
		}
		else
		{
			printf("Scenario #%ld:\n",counter);
			counter++;
			printf("Suspicious bugs found!\n");
			
		}
	}

	return 0;
}
