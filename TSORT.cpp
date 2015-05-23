#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

/* Using the counting sort algorithm */

static long count[1000010]={0};									
void counting(long a[], long n, long max)
{
	int i;
	long* output = NULL;
	for(i=0; i<n; i++)
		++count[a[i]];									
		
	for (i=1; i<=max; i++)
		count[i]=count[i]+count[i-1];
		
	output = new long[max];
	for(i=0; i<n; i++)
	{
		output[count[a[i]]]=a[i];
		count[a[i]]=count[a[i]]-1;
	}
	
	
	for(i=1; i<=n; i++)
	{
		cout<<output[i]<<"\n";
	}
}

int main()
{
	std::ios::sync_with_stdio(false);
	long n;
	cin>>n;
	long max=0;
	long a[n];
	
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		if (a[i]>max)
		{
			max = a[i];
		}
	}
	counting(a,n,max);
	return 0;
}
