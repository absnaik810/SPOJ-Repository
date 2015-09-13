#include<stdio.h>
#include<math.h>

int main()
{
	long int n,a,b,c;
	double srt,srt1,srt2;
	scanf("%ld",&n);

	while(n!=-1)
	{
		a=3;
		b=-3;
		c=1-n;

		srt1=(-b+sqrt(b*b-4.0*a*c))/2*a;
		srt2=(-b-sqrt(b*b-4.0*a*c))/2*a;

		if(srt1>0)
			srt=srt1;
		else
			srt=srt2;
		
		if(srt-(int)srt==0)
			printf("Y\n");
		else
			printf("N\n");

		scanf("%ld",&n);
	}

	return 0;
}
