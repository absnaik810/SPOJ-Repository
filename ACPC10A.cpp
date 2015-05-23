#include <iostream>
using namespace std;

int main()
{
	int x,y,z;
	cin>>x;
	//cout<<x<<"\n";
	cin>>y;
	//cout<<y<<"\n";
	cin>>z;
	//cout<<z<<"\n";
	while (x!=0 || y!=0 || z!=0)
	{
		if((y-x)==(z-y))// && x!=y)
		{
			//cout<<(y-x)<<"\n";
			//cout<<(z-y)<<"\n";
			cout<<"AP "<<z+(z-y)<<"\n";
		}
		else
		{
			//if (y==0 || x==0 || (z/y)<1 || (y/x)<0)
				//break;
			//cout<<(double)(z/y)<<"\n";
			//cout<<(double)(y/x)<<"\n";
			//if ((z/y)==(y/x))
				cout<<"GP "<<z*(z/y)<<"\n";
			//else 
				//break;
		}
		cin>>x;
		cin>>y;
		cin>>z;
	}
	return 0;
}
