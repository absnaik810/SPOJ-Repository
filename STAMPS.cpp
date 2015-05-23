#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
	int n,j=1;
	scanf("%d",&n);

	while(n--)
	{
		long int borrow,sum=0;
		long int noFriends,count=0;
		scanf("%ld %ld",&borrow,&noFriends);

		long int i,array[noFriends];
		for(i=0; i<noFriends; i++)
			scanf("%ld",&array[i]);

		std::sort(array,array+noFriends);
		
		i--;
		while(sum<borrow && i>=0)
		{
			count++;
			sum=sum+array[i];
			i--;
		}

		if(sum>=borrow)
		{
			printf("Scenario #%d:\n",j);
			printf("%ld\n",count);
			j++;
		}
		else
		{
			printf("Scenario #%d:\n",j);
			printf("impossible\n");
			j++;
		}
		printf("\n");
	}

	return 0;
}
