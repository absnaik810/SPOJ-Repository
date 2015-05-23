#include <stdio.h>

#define toDigit(c) (c-'0')

int main()
{
	int t=10;
	while(t--)
	{
		int i=0,j=0,end=0;
		char total[111],more[111];
		scanf("%s",total);
		scanf("%s",more);
				
		while(total[i]!='\0')
			i++;
		i--;				//take the pointer to the rightmost digit of total[]
		int z;
		z=i;
		end=i;
		
		while(more[j]!='\0')
			j++;
		j--;				//take the pointer to the rightmost digit of more[]
		
		if(j<i)
		{
			int tmp;
			for(tmp=i; tmp>=0; tmp--)
			{
				if(j<0)
				{
					more[tmp]='0';
					j--;
				}
				else 
					more[tmp]=more[j--];		//This block of code is to make the size of more[] same as that of total[] by appending 0s in 
			}						//the prefix
		}
		j=i;

		int tempold[111],temp1[111],h=0;

		for(h=0; h<=z; h++)
		{
			tempold[h]=toDigit(total[h]);
		}

		for(h=0; h<=z; h++)
		{
			temp1[h]=toDigit(more[h]);
		}

		while(j>=0)
		{
			if(tempold[i]<temp1[j])
			{
				tempold[i]=toDigit(total[i])+10;
				temp1[j-1]=temp1[j-1]+1;
			}
			tempold[i]=tempold[i]-temp1[j];
			j--;
			i--;
		}

		i=0;
		while(i<=z && tempold[i]==0)
		{
			i++;
		}		
		
		//for(; i<=z; i++)
		//{
			//printf("%d",tempold[i]);
		//}
		//printf("\n");
		
		//Logic of subtraction ends above
		
		//Logic of division begins here:
		//z points to the end of the number in the array
		//i=0 points to the beginning of the number in the array

		int quotient[111];
		int dividend=0;
		i=0;
		bool flag=true;
		int m=0;
		while(tempold[i]==0)
		{
			i++;
		}
		m=i;
		while(i--)
		{
			quotient[i]=0;			//Prefix as many zeros in the quotient array as there are in the tempold[] one!!
		}
		i=m;
		int quotienttemp[111];
		for(h=0; h<=z; h++)
		{
			quotienttemp[h]=quotient[h];
		}
		while (i<=z)
		{
			if(flag==true && tempold[i]<2)
			{
				flag=false;
				dividend=tempold[i]*10+tempold[i+1];
				quotient[i]=0;
				quotienttemp[i]=0;
				i++;
			}
			else
			{
				if(flag==true)
				{
					flag=false;
					dividend=tempold[i];
				}
			}
			quotient[i]=dividend/2;
			quotienttemp[i]=dividend/2;
			dividend=dividend%2;
			if(i==z && dividend==1)
			{
				quotient[i]++;
			}
			if(i<z)
				dividend=dividend*10+tempold[i+1];
			else 
				break;
			i++;
		}

		//Logic of division ends above
		//Below is the copy-pasted logic of subraction:
		
		//i is the end of the total array
		//j is the end of the quotient array
		//Both the arrays end at z

		i=end;
		j=z;
		//j=i;

		int temp[111];
		for(h=0; h<=z; h++)
		{
			temp[h]=toDigit(total[h]);
		}
		//for(h=0; h<=z; h++)
		//{
			//printf("The temp array originally is: %d \n",temp[h]);
		//}
		//int quotienttemp[101];
		//for(h=0; h<=z; h++)
		//{
			//quotienttemp[h]=quotient[h];
		//}
		while(j>=0)
		{
			//printf("Comparing %d and %d \n",temp[i],quotient[j]);
			if(temp[i]<quotient[j])
			{
				temp[i]=toDigit(total[i])+10;
				quotient[j-1]=quotient[j-1]+1;
			}
			temp[i]=temp[i]-quotient[j];
			j--;
			i--;
		}

		i=0;
		while(i<=z && temp[i]==0)
		{
			i++;
		}
		for(; i<=z; i++)
		{
			printf("%d",temp[i]);
		}
		printf("\n");

		i=0;
		while(i<=z && quotienttemp[i]==0)
		{
			i++;
		}		
		
		for(; i<=z; i++)
		{
			printf("%d",quotienttemp[i]);
		}
		printf("\n");
	}		
	return 0;
}
