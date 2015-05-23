#include<stdio.h>

int main()
{
	int T;
	scanf("%d",&T);

	while(T--)
	{
		long long int n,uptri,dntri;
		scanf("%lld",&n);

		uptri=(n*(n+1)*(n+2))/6;
		if(n%2==0)
			dntri=(n*(n+2)*(2*n-1))/24;
		else
			dntri=((n*n-1)*(2*n+3))/24;

		printf("%lld\n",(uptri+dntri));
	}
	return 0;
}
