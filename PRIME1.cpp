#include <iostream>
#include <stdio.h>
using namespace std;

#define LLI long long int

int main()
{
	std::ios::sync_with_stdio(false);
	LLI primes[3401],x,y;
	int i,j,n,end;
	bool flag;

	//for (i=0;i<31624;i++)
	//	primes[i]=0;
	
	primes[0]=2;
	end=1;
	for(i=3; i*i<=1000000000; i=i+2)
	{
		flag=true;
		for(j=0; primes[j]*primes[j]<=i; j++)
		{
			if(i%primes[j]==0)
			{
				flag=false;
				break;
			}
		}
		if(flag==true)
		{
			primes[end++]=i;
		}
	}

	//for(i=0; i<3450; i++){					//3400th prime number is the last one: 31607
	//	if (primes[i]==0)
	//		cout<<i<<":"<<primes[i]<<"\n";
	//	if(i==3400)
	//		cout<<i<<" th prime number is: "<<primes[i]<<"\n";
//	}

	scanf("%d",&n);
	while(n--)
	{
	scanf("%llu",&x);
	scanf("%llu",&y);

	if(x==1)
		x++;						//As 1 is neither composite nor prime

		for(; x<=y; x++)
		{
			flag=true;
			for(j=0; primes[j]*primes[j]<=x; j++)
			{
				if(primes[j]==0)
					break;
				if(x%primes[j]==0)
				{
					flag=false;
					break;
				}
			}
			if(flag==true)
			{
				printf("%llu",x);
				printf("\n");
			}
		}
	}
	return 0;	
}
