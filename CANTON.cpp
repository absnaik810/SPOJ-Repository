#include<stdio.h>
#include<math.h>

int main()
{
	int t;
	long num,d=0,end=0,temp=0,up,dn;
	float tempfloat=0.0;
	scanf("%d",&t);

	while(t--)
	{
		scanf("%ld",&num);
		tempfloat=(sqrt(8*num+1)/2);
		temp=tempfloat;				//Calculating the diagonal number
		if(tempfloat-temp>0.500000)
			d=temp+1;
		else
			d=temp;
		end=(d*d+d)/2;				//Calculating the end points of the diagonal

		//printf("Diagonal number is: %ld\n",d);
		//printf("End point is: %ld ",end);
		//printf("\n");

		if(d%2!=0)
		{
			dn=d-(end-num);
			up=(d+1)-dn;
			printf("TERM %ld IS %ld/%ld\n",num,up,dn);
		}
		else
		{
			dn=(end-num)+1;
			up=d-(end-num);
			printf("TERM %ld IS %ld/%ld\n",num,up,dn);
		}
	}

	return 0;
}
