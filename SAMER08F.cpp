#include <iostream>
#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	while(n!=0)
	{
		printf("%d",(n*(n+1)*(2*n+1))/6);
		printf("\n");
		scanf("%d",&n);
	}
	return 0;
}
