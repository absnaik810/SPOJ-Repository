#include<iostream>
#include<sstream>
using namespace std;

string trim(string& str)
{
    size_t first = str.find_first_not_of(' ');
    size_t last = str.find_last_not_of(' ');
    return str.substr(first, (last-first+1));
}

int main()
{
	int n,i=0,intnum1=0,intnum2=0,intnum3=0;
	cin>>n;
	string data,num1,num2,num3;
	getline(cin,data);
	getline(cin,data);

	while(n--)
	{
		getline(cin,data);
		
		int pos = data.find("machula");
		int posPlus = data.find("+");
		int posEqual = data.find("=");
		if(posPlus<pos && posEqual<pos)
		{
			num1=data.substr(0,posPlus-1);
			num2=data.substr(posPlus+1,posEqual-(posPlus+1));
			std::istringstream(num1) >> intnum1;
			std::istringstream(num2) >> intnum2;
			cout<<intnum1<<" + "<<intnum2<<" = "<<intnum1+intnum2<<"\n";
		}
		if(posPlus<pos && posEqual>pos)
		{
			num1=data.substr(0,posPlus-1);
			num3=data.substr(posEqual+1);
			std::istringstream(num1) >> intnum1;
			std::istringstream(num3) >> intnum3;
			cout<<intnum1<<" + "<<(intnum3-intnum1)<<" = "<<intnum3<<"\n";
		}
		if(posPlus>pos && posEqual>pos)
		{
			num2=data.substr(posPlus+1,posEqual-(posPlus+1));
			num3=data.substr(posEqual+1);
			std::istringstream(num2) >> intnum2;
			std::istringstream(num3) >> intnum3;
			cout<<(intnum3-intnum2)<<" + "<<intnum2<<" = "<<intnum3<<"\n";
		}
		getline(cin,data);
	}

	return 0;
}

