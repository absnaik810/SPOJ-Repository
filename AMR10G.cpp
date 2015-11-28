#include<stdio.h>
#include<algorithm>
using namespace std;

bool mySort(int i, int j)
{
	return i>j;
}

int main()
{
	int T,K,N,i;
	long int min=0, tempRes=0;

	scanf("%d",&T);
	while(T--)
	{
		scanf("%d %d",&N,&K);
		long int height[N];

		for(i=0; i<N; i++)
		{
			scanf("%ld",&height[i]);
		}

		std::sort(height,height+N, mySort);

		i=0;
		//printf("%ld\n",height[i]-height[K-1]);
		
		min=999999999;
		i=0;
		tempRes=999999999;
		while(i+K<=N)
		{
			tempRes=height[i]-height[i+K-1];
			//printf("TempRes: %ld\n",tempRes);

			if(tempRes<min)
				min=tempRes;
			i++;
		}
		printf("%ld\n",min);
	}
	return 0;
}
