#include<iostream>
#include<iomanip>
#include<stdio.h>
using namespace std;

int main()
{
	int i;
	double j;
	scanf("%d", &i);
	scanf("%lf", &j);
		
	if(i%5 != 0)
	{
		cout<<fixed;										
		cout<<std::setprecision(2)<<j;
		return 0;
	}		
	
	if((i+0.5)>j)
	{
		cout<<fixed;										
		cout<<std::setprecision(2)<<j;
		return 0;
	}
	else
	{
		j = j - (i+0.5);									
		cout<<fixed;
		cout<<std::setprecision(2)<<j;
		return 0;
	}
}
