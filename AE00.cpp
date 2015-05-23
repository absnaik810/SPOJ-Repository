#include<stdio.h>
#include<math.h>

int main()
{
	int n,i=1,j=1,ns=0,nr=0;
	scanf("%d",&n);
	
	ns = (int)floor(sqrt(n));
	
	while(i<=ns)
	{
		while(j>=i && i*j<=n)	
		{
			nr++;
			j++;
		}
		i++;
		j=i;
	}
	printf("%d\n",nr);
	return 0;
}
