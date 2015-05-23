#include<stdio.h>
#include<math.h>

void power(int n)
{
	int num=n;
	if(n<=3)
	{
		if(n==1)
			printf("2(0)");
		else{
		if(n==2)
			printf("2");
		else
			printf("2+2(0)");
		}
		return;
	}
	
	int j=0;
	while(pow(2,j)<=n)	
		j++;

	printf("2(");
	power(j-1);
	printf(")");

	int a=pow(2,j-1);
	if((num-a)!=0){
		printf("+");	
		power(num-a);
	}
}

int main()
{
	printf("137=");	
	power(137);
	printf("\n");	
	printf("1315=");	
	power(1315);
	printf("\n");
	printf("73=");		
	power(73);
	printf("\n");	
	printf("136=");		
	power(136);
	printf("\n");	
	printf("255=");		
	power(255);
	printf("\n");	
	printf("1384=");		
	power(1384);
	printf("\n");	
	printf("16385=");		
	power(16385);
	printf("\n");	

	return 0;
}
