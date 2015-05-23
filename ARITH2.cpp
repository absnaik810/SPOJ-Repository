#include<iostream>
#include<sstream>
using namespace std;

int main()
{
	long long int n;
	cin>>n;
	cout<<n<<"\n";
	string data;
	getline(cin,data);
	getline(cin,data);

	while(n--)
	{
		getline(cin,data);
		cout<<data<<"\n";
		cout<<"+"<<data.find("+")<<"\n";
		cout<<"-"<<data.find("-")<<"\n";
		cout<<"*"<<data.find("*")<<"\n";
		cout<<"/"<<data.find("/")<<"\n";
		cout<<"\n";
		getline(cin,data);
	}

	return 0;
}
