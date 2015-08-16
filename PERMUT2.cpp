#include<stdio.h>
using namespace std;

int main()
{
	long int n;
	scanf("%ld",&n);
	while(n!=0)
	{
		int a[n],ot[n],i=0;

		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}			

		for(i=0;i<n;i++)
			ot[(a[i]-1)]=(i+1);

		for(i=0;i<n;i++)
		{
			if(ot[i]==a[i])
				continue;
			else
				break;
		}
		
		if(i<n)
			printf("not ambiguous\n");
		else
			printf("ambiguous\n");

		scanf("%ld",&n);
	}
	return 0;
}
