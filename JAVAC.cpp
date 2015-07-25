#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int main()
{
	std::ios_base::sync_with_stdio(false);
	char data[5001];
	int i=0,j=0;
	bool isJava=true,hasError=false; //false->C++
	char* hasUnderscore=NULL;

	while(cin>>data)
	{
		hasError=false;
		i=0;
		j=0;
		isJava=true;
		hasUnderscore=NULL;
		if(((int)data[0]>=65 && (int)data[0]<=90) || (int)data[0]==95)
		{
			cout<<"Error!"<<"\n";
			hasError=true;
			continue;
		}

		while(data[j]!='\0')			
			j++;		

		for(i=0; i<(j-1); i++)
		{
			if(data[i]==data[i+1] && (int)data[i]==95)
			{
				cout<<"Error!"<<"\n";
				hasError=true;
				break;
			}
		}
		if(i<(j-1))			
			continue;

		if((int)data[j-1]==95)		
		{
			cout<<"Error!"<<"\n";
			hasError=true;
			continue;
		}

		hasUnderscore=strstr(data,"_");
		if(hasUnderscore!=NULL)		
		{
			isJava=false;
			for(i=0; i<j; i++)
				if((int)data[i]>=65 && (int)data[i]<=90)	
				{
					cout<<"Error!"<<"\n";
					hasError=true;
					break;
				}
			if(i<j)
				continue;
		}
		
		if(!hasError)
		{
			if(hasUnderscore!=NULL && isJava==false)
			{
				for(i=0; i<(j-1); i++)
				{
					if((int)data[i]==95)
						data[i+1]=(int)data[i+1]-32;
				}

				for(i=0; i<j; i++)
					if((int)data[i]!=95)
						cout<<data[i];
				cout<<"\n";
			}
			else
			{
				
				for(i=0; i<j; i++)
					if((int)data[i]>=65 && (int)data[i]<=90)
					{
						cout<<"_";
						cout<<(char)(data[i]+32);
					}
					else
					{
						cout<<data[i];
					}
				cout<<"\n";
			}
		}
	}
	return 0;
}	
