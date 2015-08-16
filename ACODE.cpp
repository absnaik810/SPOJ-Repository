#include<stdio.h>
#include<string.h>
#define toDigit(c) (c-'0')
using namespace std;

int main()
{	
	char str[5010];
	int i=0,j=0;
	scanf("%s",str);
	
	while(strcmp(str,"0")!=0)
	{
		i=0;
		j=0;
		
		if(str[0]=='0')
			return 0;
		
		while(str[j]!='\0')
			j++;

		long long int dp[j];
		while(i<j)
		{
			dp[i]=0;
			i++;
		}

		dp[0]=1;
		for(i=1;i<j;i++)
		{
			int value1=toDigit(str[i-1])*10;
			int value2=toDigit(str[i]);
			int value=value1+value2;
			
			if(value2)
				dp[i]=dp[i-1];
			if(value>=10 && value<=26)
				dp[i]+=dp[(i-2)<0?0:i-2];
		}

		printf("%lld\n",dp[j-1]);
		scanf("%s",str);
	}
	return 0;
}
