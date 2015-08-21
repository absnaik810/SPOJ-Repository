#include<stdio.h>
#include<algorithm>

using namespace std;

int main()
{
	int T,ng,nm,i,j,size=0;
	scanf("%d",&T);

	while(T--)
	{
		scanf("%d %d", &ng, &nm);
		
		if(ng>nm)
			size=ng;
		else 
			size=nm;

		int g[size+1];
		int mg[size+1];

		for(i=0;i<size;i++)
			g[i]=0;

		for(i=0;i<size;i++)
			mg[i]=0;

		for(i=0;i<ng;i++)
			scanf("%d",&g[i]);

		for(i=0;i<nm;i++)
			scanf("%d",&mg[i]);

		sort(g,g+ng);
		sort(mg,mg+nm);

		i=0;
		j=0;
		for(;i<size && j<size;)
		{
			if(g[i]==mg[j])
			{
				mg[j]=0;
				i--;
				//continue;
			}
			else
				if(g[i]<mg[j])
				{
					g[i]=0;
					j--;
					//continue;
				}
				else
					if(mg[j]<g[i])
					{
						mg[j]=0;
						i--;
						//continue;
					}
			i++;
			j++;
		}
		
		for(i=0;i<ng;i++)
			if(g[i]!=0)		
				break;
		if(i<ng)
			printf("Godzilla\n");
		else
			printf("MechaGodzilla\n");
	}

	return 0;
}
