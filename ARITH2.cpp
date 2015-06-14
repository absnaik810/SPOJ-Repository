#include<iostream>
using namespace std;

int main()
{
	long long int T;
	cin>>T;

	while(T--)
	{
		long long oper1,res=0;
		char sign='\0';
		cin>>res;

		while(sign != '=')
		{
			cin>>sign;	//Will hold the operand
			switch(sign)
			{
				case '+':	cin>>oper1;
						res+=oper1;
						break;
				case '-':	cin>>oper1;
						res-=oper1;
						break;
				case '*': 	cin>>oper1;
						res*=oper1;
						break;
				case '/':	cin>>oper1;
						res/=oper1;
						break;
				case '=':	cout<<res<<"\n";
			}
		
		}
	}

	return 0;
}

							
