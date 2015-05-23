#include<stdio.h>
#include<math.h>

int main()
{
	int n;
	scanf("%d",&n);

	while(n--)
	{
		long long k,i;
		scanf("%lld",&k);

		if(k==1) 
			printf("%d\n",192);
		else
			printf("%lld\n",192+(250*(k-1)));
	}
	return 0;
}
