#include<cstdio>
#include<string>
#include<iostream>
#include<map>

int main()
{
	int t;
	long int n;
	std::string str;
	std::map< std::string, int > myMap;
	scanf("%d", &t);

	while(t--)
	{
		scanf("%ld", &n);
		std::cin.ignore();
		while(n--)
		{
			getline(std::cin, str);
			myMap[str]++;
		}

		for(std::map< std::string, int >::iterator it=myMap.begin(); it!=myMap.end(); it++)
			printf("%s %d\n", it->first.c_str(), it->second);
		printf("\n");

		myMap.erase(myMap.begin(), myMap.end());
	}

	return 0;
}
