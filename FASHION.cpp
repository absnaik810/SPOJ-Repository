#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,sum=0;
		scanf("%d",&n);
		int men[n],women[n];
		for(i=0; i<n; i++)
			scanf("%d",&men[i]);
		for(i=0; i<n; i++)
			scanf("%d",&women[i]);

		std::sort(men,men+n);
		std::sort(women,women+n);
		
		for(i=0; i<n; i++)
			men[i]*=women[i];

		for(i=0; i<n; i++)
			sum+=men[i];

		printf("%d\n",sum);
	}
	return 0;
}
