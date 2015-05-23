#include<stdio.h>

bool isPowerOfTwo(long long int n)
{
	return ((n!=0) && ((n & (n-1))==0));
}

int main()
{
	long long int n;
	bool result=false;
	scanf("%lld",&n);

	result=isPowerOfTwo(n);
	if(result)
		printf("TAK\n");
	else 
		printf("NIE\n");

	return 0;
}


