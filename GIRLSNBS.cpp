#include<stdio.h>
#include<math.h>

int main()
{
	int g,b;
	float div=0;
	scanf("%d %d",&g,&b);
	
	while(g!=-1 && b!=-1)
	{
		if(b<=g)
		{
			b++;
			div=float(g)/float(b);
		}
		else
		{
			g++;
			div=float(b)/float(g);	
		}

		printf("%d\n",(int)ceil(div));
		scanf("%d %d",&g,&b);
	}

	return 0;
}
