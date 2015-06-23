#include<stdio.h>

int main()
{
	long int N,x,res=0;
	scanf("%ld",&N);

	while(N--)
	{
		scanf("%ld",&x);
		res^=x;
	}

	printf("%ld\n",res);
	return 0;
}
