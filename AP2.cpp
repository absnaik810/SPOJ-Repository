#include<stdio.h>

int main()
{
	int t;
	long long int third,thirdLast,sum,diff,n,first,i;
	scanf("%d",&t);

	while(t--)
	{
		scanf("%lld %lld %lld",&third,&thirdLast,&sum);
		n=(2*sum)/(third+thirdLast);
		printf("%lld\n",n);
		diff=(thirdLast-third)/(n-5);

		first=third-2*diff;
		printf("%lld ",first);

		for(i=1;i<n;i++)
			printf("%lld ",(first+i*diff));
		printf("\n");
	}

	return 0;
}
