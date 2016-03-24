#include<stdio.h>
#include<string>
#include<cstring>
#define toDigit(c) (c-'0')
using namespace std;

int main()
{
	string input;
	int carry=0,i=0;
	char str[102];
	int ans[102];

	while(scanf("%s",str)!=EOF)
	{
      		carry=0;i=0;

	       	if(!strcmp(str,"1"))
		{
			printf("1\n");
			continue;
		}

		if(!strcmp(str,"0"))
		{
			printf("0\n");
			continue;
		}

		if(!strcmp(str,"5"))
		{
			printf("8\n");
			continue;
		}

        	i=0;
        	while(str[i]!='\0')
        		i++;
        	i--;
        	int j=i;
        	int size=i+1;
        
        	while(i>=0 && j>=0)
        	{
        		ans[j]=((toDigit(str[i])+toDigit(str[i]))+carry)%10;
        		carry=((toDigit(str[i])+toDigit(str[i]))+carry)/10;
        		i--;
        		j--;
        	}
        
        	i=size-1;
        	bool skip=false;
        	while(ans[i]==0)
        	{
        		if(i==(size-1))
        			ans[i]=8;
        		else
        			ans[i]=9;
        		skip=true;
        		i--;
        	}
        	if(skip)
        		ans[i]=ans[i]-1;
        
        	for(i=0;i<size;i++)
        	{
        		if(i==(size-1) && !skip && carry)
			{
        			printf("%d%d",carry,ans[i]-2);
				carry=0;
			}
        		else
				if(i==(size-1) && !skip)
					printf("%d",ans[i]-2);
				else
					if(carry && i==0)
					{
        					printf("%d%d",carry,ans[i]);
						carry=0;
					}
	        			else
        					printf("%d",ans[i]);
        	}
        	printf("\n");
	}

	return 0;
}
