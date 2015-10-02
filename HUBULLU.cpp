#include<stdio.h>

int main()
{
	int t,s;
       	long int N;
	scanf("%d",&t);

	while(t--)
	{
		scanf("%ld %d",&N,&s);

		if(s==0)
			printf("Airborne wins.\n");
		else
			printf("Pagfloyd wins.\n");
	}

	return 0;
}
