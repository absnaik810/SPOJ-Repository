#include<stdio.h>
#include<cmath>
using namespace std;

int main()
{
	int t;
	long long int a1,a,b,c,s,d,n,a3,a4,j;
	long double newn,newd,newb,newc;
	scanf("%d",&t);

	while(t--)
	{
		scanf("%lld %lld %lld",&a3,&a4,&s);

		a=a3+a4;
		newb=-((a4+a3)*6.0)+(a4-a3)-(2.0*s);
		b=llrint(newb);
		newc=12.0*s;
		c=llrint(newc);

		newn=(-newb+sqrtl((newb*newb)-(4.0*a*newc)))/(2.0*a);
		n=llrint(newn);
		newd=(a4-a3)/(newn-6.0);
		d=llrint(newd);
		
		a1=a3-(2.0*newd);

		printf("%lld\n",n);
		for(j=0;j<n;j++)
			printf("%lld ",(a1+j*d));
		printf("\n");
	}

	return 0;
}
