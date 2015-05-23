#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

void parse(char array[], int size)
{
	int i=0,stkptr=0;
	char stack[size];
	
	while(array[i]!=0)
	{
		switch(array[i])
		{
			case '(': break;
			case '+': stack[stkptr]='+';
				  stkptr++;
				  break;
			case '-': stack[stkptr]='-';
				  stkptr++;
				  break;
			case '*': stack[stkptr]='*';
				  stkptr++;
				  break;
			case '/': stack[stkptr]='/';
				  stkptr++;
				  break;
			case '^': stack[stkptr]='^';
				  stkptr++;
				  break;
			case ')': cout<<stack[--stkptr];
				  break;
			default : cout<<array[i];
				  break;
		}
		i++;
	}
	cout<<"\n";
	return;
}

int main()
{
	std::ios::sync_with_stdio(false);
	int n,i=0;
	string str;
	cin>>n;

	while(n--)
	{
		cin>>str;
		char array[str.length()];
		std::strncpy(array,str.c_str(),sizeof(array));
		array[sizeof(array)]=0;

		parse(array,str.length());
	}
	return 0;
}
