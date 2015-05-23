#include <iostream>
#include <stdio.h>

int main()
{
	int n,x,y;
	scanf("%d",&n);
	
	while(n--)
	{
		scanf("%d",&x);
		scanf("%d",&y);

		if(x==y)
		{
			if(x%2==0){
				//cout<<x*2<<"\n";
				printf("%d",x*2);
				printf("\n");
			}
			else{
				printf("%d",x*2-1);
				printf("\n");
				//cout<<x*2-1<<"\n";
			}
		}
		else
			if(x-y==2)
			{
				if(x%2==0){
					printf("%d",x+y);
					printf("\n");
					//cout<<x+y<<"\n";
				}
				else{
					printf("%d",x+y-1);
					printf("\n");
					//cout<<x+y-1<<"\n";
				}
			}
			else
				printf("No Number\n");
	}
	return 0;
}

