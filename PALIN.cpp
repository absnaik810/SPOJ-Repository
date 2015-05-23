#include<stdio.h>
#include<string.h>
#include<math.h>
#include<sstream>
using namespace std;

int main()
{
	long int t;
	scanf("%ld",&t);

	while(t--)
	{
		long int k,n,i=0,j,mid,nd,reverseStart,number;
		char array[1000001];	
		char copy[1000001];	
		scanf("%s",&array);
		long int arraySize=0;
		arraySize=sizeof(array)/sizeof(*array);
		strncpy(copy,array,arraySize);
		
		bool isEven = false;
		bool isLarge=false;

		while(array[i]!='\0')				
			i++;
		
		//added the below code now!
		//if(array[0]=='9' && array[1]=='\0')
		//{
		//	printf("11\n");
		//	continue;
		//}
		//The code ends
		
		std::istringstream(array)>>number;
		j=0;
		k=0;
		while(array[k]!='\0')
		{
			if(array[k]=='9')
				j++;
			k++;
		}
		if(i==j)
		{
			printf("1");
			for(j=0;j<(i-1);j++)
				printf("0");
			printf("1");
			printf("\n");
			continue;
		}
		
		if(i%2==0)
			isEven=true;

		if(isEven)
			mid=i/2;
		else
			mid=ceil((i/2));
		//printf("Mid i isEven: %ld,%ld,%d\n",mid,i,isEven);

		i=mid-1;
		if(!isEven)
			reverseStart=mid+1;
		else 
			reverseStart=mid;

		while(array[reverseStart]!='\0')
			array[reverseStart++]=array[i--];

		//i=0;
		//while(array[i]!='\0')
			//printf("%c",array[i++]);
		//printf("\n");

		//copy has original number, array has the new palindrome number
		i=0;
		while(array[i]!='\0')
		{
			if(array[i]>copy[i])
			{
				isLarge=true;
				break;
			}
			else 
				if(array[i]==copy[i])
						i++;
				else
					break;
		}
		//printf("isLarge is: %d\n",isLarge);
		//delete[] copy;

		//printf("Mid is: %ld\n",mid);
		long int pointer=0,middle;
		i=0;
		if(!isLarge)
		{
			if(isEven)
			{
				if(array[mid]=='9')
				{
					middle=mid;
					while(array[mid]=='9')
					{
						array[mid]='0';
						mid++;
						i++;
					}
					array[mid--]++;
					while(pointer<=i)
					{
						array[middle--]='0';
						pointer++;
					}
					array[middle]++;
				}
				else
				{
					array[mid]++;
					array[mid-1]++;
				}
				i=0;
				while(array[i]!='\0')
					printf("%c",array[i++]);
				printf("\n");
			}
			else
			{
				if(array[mid]=='9')
				{
					middle=mid;
					while(array[mid]=='9')
					{
						array[mid]='0';
						mid++;
						i++;
					}
					array[mid--]++;
					while(pointer<i)
					{
						array[middle--]='0';
						pointer++;
					}
					array[middle]++;
				}
				else
				{
					array[mid]++;
				}
				i=0;
				while(array[i]!='\0')
					printf("%c",array[i++]);
				printf("\n");
			}
		}
		else
		{
			i=0;
			while(array[i]!='\0')
				printf("%c",array[i++]);
			printf("\n");
		}
	}

	return 0;
}

