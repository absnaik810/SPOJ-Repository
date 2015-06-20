#include<stdio.h>
#define PI 3.141592653589793

int main()
{
	unsigned int L;

	while(true)
	{
		scanf("%d",&L);
		if(L!=0)
			printf("%.2f\n",((L*L)/(2*PI)));
		else
			return 0;
	}

	return 0;
}
