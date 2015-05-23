#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);

	while(t--)
	{
		long n;
		double ans;
		scanf("%ld",&n);
		ans=(0.5/(2+n))-(0.5/(1+n))+(3.0/4.0);
		printf("%.11lf\n",ans);
	}

	return 0;
}
