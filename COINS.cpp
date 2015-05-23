#include<stdio.h>
#include<algorithm>
#include<map>
using namespace std;

map<long long, long long> dollars;

long long getAmericanDollars(long long n)
{
	if(n==0)
		return 0;

	if(dollars[n]!=0)
		return dollars[n];
	else
	{
		long long aux=getAmericanDollars(n/2)+getAmericanDollars(n/3)+getAmericanDollars(n/4);
		if(aux>n)		
			dollars[n]=aux;
		else
			dollars[n]=n;
		return dollars[n];
	}
}

int main()
{
	long long n;
	while(scanf("%lld",&n)==1)
	{
		printf("%lld\n",getAmericanDollars(n));	
	}
	return 0;
}
