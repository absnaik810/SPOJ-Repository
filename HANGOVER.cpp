#include<stdio.h>
using namespace std;

bool isSmall(float sum, float n)
{
	if((n-sum)>0.000001){
		return true;
	}
	else{
		return false;
	}
}

int main()
{
	float n;
	scanf("%f",&n);

	while(n!=0.00)
	{
		float sum=0.00;
		float i=2;
		
		while(isSmall(sum,n)){
			sum+=(1/i);		//Note: 1/i --> int/float will give the answer in float(sum). If i is int, then the program hangs
			i=i+1;
		}

		printf("%d card(s)\n",(int)(i-2)); //If typecasting to int not done then %d prints 0. %f prints the answer in float(3.000000). Typecasting to int gives 3	
		scanf("%f",&n);
	}
	return 0;
}
