#include<stdio.h>

typedef int bool;
#define true 1
#define false 0

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int a;
		scanf("%d",&a);
		long long b;
		scanf("%lld",&b);
		if((a%10)==1){
			printf("1\n");
			continue;
		}
		if(b==0){
			printf("1\n");
			continue;
		}
		int end=1,i,unit[100],temp=1;
		unit[0]=1;			
		bool goOn=true,marker=false;
		while(goOn){
			temp*=a;
			for(i=0; i<end; i++){
				if(unit[i]==(temp%10) && ((temp%10)!=1))
					marker=true;
			}
			if(marker)
				goOn=false;
			if(!marker){
				unit[end]=(temp%10);
				end++;
			}
		}
		int tmp=b%(end-1);
		if(tmp==0)
			printf("%d\n",unit[(end-1)]);
		else
			printf("%d\n",unit[(tmp)]);
	}
	return 0;
}		
