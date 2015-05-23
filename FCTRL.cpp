#include <iostream>
#include <math.h>
using namespace std;

int main()
{
 unsigned long long n;
 cin>>n;
 while(n--)
 {
	unsigned long long num;
	unsigned long long count=0,k=0;
	cin>>num;
	while(pow(5,k)<=num)
	{
		k++;
	}
	for(int j=1; j<k; j++)
	{
		count += floor(num/pow(5,j));
	}
	cout<<count<<endl;
 }
 return 0;
} 
