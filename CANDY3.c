#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	
	while(n--)
	{
		unsigned long long int number,i=0;
		unsigned long long int sum=0;
		scanf("%llu",&number);
		long long int array [number];
		
		for(i=0; i<number; i++)
			scanf("%lld",&array[i]);

		for(i=0; i<number; i++)
			array[i]=array[i]%number;

		for(i=0; i<number; i++)
			sum+=array[i];

		if(sum%number==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

