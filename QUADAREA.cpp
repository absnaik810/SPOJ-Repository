#include<stdio.h>
#include<math.h>

int main()
{
	int T;
	double s1, s2, s3, s4, s, ans;
	scanf("%d",&T);

	while(T--)
	{
		scanf("%lf%lf%lf%lf",&s1,&s2,&s3,&s4);
		s=(s1+s2+s3+s4)/2;

		ans=sqrt((s-s1)*(s-s2)*(s-s3)*(s-s4));		//Bretschneider's formula

		printf("%.2f\n",ans);
	}

	return 0;
}
