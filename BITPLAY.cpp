#include<stdio.h>
#include<bitset>
#include<string>
#include<cstring>
using namespace std;

string binaryCalc(long num)
{
	string binary = bitset<50>(num).to_string(); //to binary
	return binary;
}

long decimalCalc(string binary)
{
	long decimal = std::bitset<50>(binary).to_ulong();
	return decimal;
}

int main()
{
	int T,K,i;
	long N,counter=0;
	string binaryString;
	char binary[50];
	scanf("%d",&T);

	while(T--)
	{
		scanf("%ld %d",&N,&K);
		if(K==0)
		{
			printf("-1\n");
			continue;
		}

		if(N%2==0)
			N--;		

		while(N>=1)
		{
			counter=0;
			binaryString=binaryCalc(N);
			strcpy(binary,binaryString.c_str());
			
			for(i=0;i<sizeof(binary);i++)	
				if(binary[i]=='1'){
					counter++;
				}
		
			if(counter<=K)
			{
				printf("%ld\n",N);
				break;
			}
			else
			{
				i=sizeof(binary)-2;	//i=48 -> (LSB-1)th bit
				while(counter>K)
				{
					if(binary[i]=='1')
					{
						binary[i]='0';
						counter--;
					}
					i--;
				}
				printf("%ld\n",decimalCalc(binary));
				break;
			}
		}

		if(N<1)
			printf("-1\n");
	}

	return 0;
}
