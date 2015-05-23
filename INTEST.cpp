#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int i,count=0;
	unsigned long j;
	
	scanf("%d",&i);
	scanf("%lu",&j);
	
	while(i--)
	{
		unsigned long k;
		scanf("%lu",&k);
		if(k%j==0)
			count++;
	}
	
	printf("%d",count);
}
