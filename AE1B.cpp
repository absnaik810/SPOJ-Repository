#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
	int n,s,k,i;
	long int total=0,sum=0,count=0;

	scanf("%d %d %d",&n,&s,&k);
	long int array[n];

	for(i=0; i<n; i++)
		scanf("%ld",&array[i]);

	std::sort(array,array+n);

	i--;
	total=s*k;
	while(sum<total && i>=0)
	{
		count++;
		sum+=array[i];
		i--;
	}

	printf("%ld\n",count);
	return 0;
}
