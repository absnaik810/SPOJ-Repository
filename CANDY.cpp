#include <stdio.h>

int main()
{
	int number;
	scanf("%d",&number);
	//cout<<number<<"\n";
	if(number==-1)
		return 0;
	
	while(number!=-1)
	{
		int sum=0,i=0,equal=0,lessCount=0;
		int array[number];

		for(i=0; i<number; i++)
		{
			scanf("%d",&array[i]);
		}

		for(i=0; i<number; i++)
		{
			sum+=array[i];
		}
		//printf("%d",sum);

		equal=sum/number;

		if(equal*number==sum)
		{

			for(i=0; i<number; i++)
			{
				if(array[i]<equal)
					lessCount+=(equal-array[i]);
			}
			printf("%d \n",lessCount);
		}
		else
		{
			printf("-1\n");
		}
		scanf("%d",&number);
	}
	return 0;
}
