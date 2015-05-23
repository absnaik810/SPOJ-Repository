
#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

int Reverse(int a)
{
	int power=floor(log10(abs (a)))+1;		//This gives the number of digits in a number
	power--;					//Because the max power is 1 less than the number of digits in the number
	//cout<<"The number of digits is: "<<power<<"\n";
	int number=0;
	int temp=0;
	while(a>0)
	{
		temp=a%10;
		a=a/10;
		number=temp*pow(10,power)+number;
		power--;
	}
	return number;	
}

int main()
{
	std::ios::sync_with_stdio(false);
	int n,j=0,k=0;
	cin>>n;
	int number1[n];
	int number2[n];
	int num1=0;
       	int num2=0;
	
	abc: for(;j<n;)
	{
		cin>>number1[j];
		//cout<<"For player 1: "<<number1[j]<<endl;
		j++;
		break;
	}
	
	for(;k<n;)
	{
		cin>>number2[k];
		//cout<<"For player 2: "<<number2[k]<<endl;
		k++;
		//goto abc;
		break;
	}
	
	if(j<n || k<n)
	{
		goto abc;
	}

	for(j=0,k=0; j<n && k<n; j++,k++)
	{
		num1=Reverse(number1[j]);
		num2=Reverse(number2[k]);
		int sum = num1+num2;
		cout<<Reverse(sum)<<"\n";
	}
}
