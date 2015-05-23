#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);

	while(t--)
	{	
		long long tri,cards,level;
		scanf("%lld",&level);
		
		tri = (level*(level+1))/2;
		cards=(tri*3)-level;
		cards=cards%1000007;
		printf("%lld\n",cards);
	}
	return 0;
}
