#include<stdio.h>

int main()
{
	int counter14=0,counter12=0,counter34=0,n,n1,n2,ans=0;
	scanf("%d",&n);

	while(n--)
	{
		scanf("%d/%d",&n1,&n2);
		if(n1==3)
			counter34++;
		else
			if(n2==2)
				counter12++;
			else
				counter14++;
	}

	counter14=counter14-counter34;			//Because we will get one 1/4 for each 3/4

	//2 1/2s make 1. So finding out the total number of pizzas that would be required in this case

	ans=counter34;					//Done with 3/4 pizza
	
	ans+=(counter12-(counter12%2))/2;		//Done with 1/2 pizza
	if(counter12%2)
	{
		ans++;
		counter14--;
		counter14--;
	}
	
	if(counter14>0)
	{
		ans+=(counter14-(counter14%4))/4;
		if(counter14%4)
			ans++;
	}

	printf("%d\n",(ans+1));
	return 0;
}

