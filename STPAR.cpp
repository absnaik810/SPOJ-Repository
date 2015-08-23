#include<stdio.h>
#include<stack>
#include<algorithm>

using namespace std;

int main()
{
	int n,i,next,j;
	scanf("%d",&n);

	while(n!=0)
	{
		int lm[n],op[n];
		std::stack<int> my_stack;
		for(i=0;i<n;i++)
			scanf("%d",&lm[i]);
		
		next=1;
		j=0;
		for(i=0;i<n;i++)
		{
			if(lm[i]==next)
			{
				op[j]=lm[i];
				next++;
				j++;
			}
			else
			{
				if(!my_stack.empty() && next==my_stack.top())
				{
					op[j]=my_stack.top();
					next++;
					j++;
					i--;
					my_stack.pop();
				}
				else
				{
					if(lm[i]>next)
					{
						my_stack.push(lm[i]);
					}
				}
			}
		}

		while(!my_stack.empty())
		{
			op[j]=my_stack.top();
			my_stack.pop();
			j++;
		}

		sort(lm,lm+n);

		for(i=0;i<n;i++)
			if(lm[i]==op[i]){}
			else
				break;

		if(i<n)
			printf("no\n");
		else
			printf("yes\n");

		scanf("%d",&n);
	}
	return 0;
}
