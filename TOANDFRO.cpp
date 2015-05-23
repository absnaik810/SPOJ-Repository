#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int n,i=0,j=0;
	cin>>n;

	if(n==0)
		return 0;

	string str;
	cin>>str;

	while(n!=0)
	{
		int length = str.length();
		//char array[length+1];
//		strncpy(array, str.c_str(), sizeof(array));
//		array[sizeof(array)] = 0;

		i=0;
		j=0;
		for(j=0; j<n; j++){
		while(i<length)
		{
			if(i%(n*2)==j || i%(n*2)==(n*2-j-1))
				cout<<str.at(i);
			i++;
		}
		i=0;
		}

		cout<<"\n";
		cin>>n;
		if(n==0)
			break;
		cin>>str;
	}
	return 0;
}
