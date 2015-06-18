#include<stdio.h>
#include<math.h>
#include<vector>
#include<algorithm>

int main()
{
	long int num,digits=0,res=0,counter=0,crnt=0;
	std::vector<long> vector;
	scanf("%ld",&num);

	while(true)			
	{
		counter++;
		digits=(int)(log10(num))+1;
		while(digits)	
		{
			crnt=num/((long)(pow(10,digits-1)));
			num=num%((long)(pow(10,digits-1)));
			res+=pow(crnt,2);
			digits--;
		}
		
		if(res==1l)
		{
			printf("%ld\n",counter);
			break;
		}
		else
		{
			if(find(vector.begin(), vector.end(), res)!=vector.end())
			{
				printf("-1\n");
				break;
			}
			else
			{
				vector.push_back(res);
				num=res;
				res=0;
			}
		}
	}
	return 0;
}
