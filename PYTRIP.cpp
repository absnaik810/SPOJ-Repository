#include<stdio.h>
#include<math.h>
#include<map>
using namespace std;

long abs(long number)
{
	if(number<0)
		return -number;
	else 
		return number;
}

int main()
{
	long t,a,b,c,n,m,counter=0,temp,i;
	bool found=false;
	scanf("%ld",&t);

	while(t--)
	{
		scanf("%ld",&n);
		scanf("%ld",&m);

		for(i=n;i<=m;i++)
		{
			if(i%2!=0)
			{
				a=i;
				b=(a*a-1)/2;
				c=b+1;
				printf("i,a,b,c are %ld,%ld,%ld,%ld\n",i,a,b,c);

				if(a<c && b<c && c<=m && a>=1 && b>=1)
				{
					counter++;
					printf("Counter: %ld\n",counter);
				}
				if(abs(a-b)==abs(b-c) && a>b && b<n)
					counter--;
			}
			else
			{
				a=i;
				b=((a/2)*(a/2))-1;
				c=b+2;
				printf("i,a,b,c are %ld,%ld,%ld,%ld\n",i,a,b,c);

				if(a<c && b<c && c<=m && a>=1 && b>=1)
				{
					counter++;
					printf("Counter: %ld\n",counter);
				}
				if(a>b && b<n)
					counter++;
			}
		}
		printf("Counter is: %ld\n",counter);
	}
	return 0;
}
