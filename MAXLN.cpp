#include<stdio.h>

int main()
{
	int T,counter=0;
	double r=0,ans=0;
	scanf("%d",&T);

	while(T--)
	{
		counter++;
		scanf("%lf",&r);
		ans=4*r*r+0.25;

		printf("Case %d: %.2lf\n",counter,ans);
	}

	return 0;
}
