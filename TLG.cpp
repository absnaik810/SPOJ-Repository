#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	int rounds,j=0,k=0;
	cin>>rounds;
	int player1[rounds];
	int player2[rounds];
	
	abc: for(;j<rounds;)
	{
		cin>>player1[j];
		//cout<<"For player 1: "<<player1[j]<<endl;
		j++;
		break;
	}
	
	for(;k<rounds;)
	{
		cin>>player2[k];
		//cout<<"For player 2: "<<player2[k]<<endl;
		k++;
		//goto abc;
		break;
	}
	
	if(j<rounds || k<rounds)
	{
		goto abc;
	}
		
	//Make the changes below:
	for(j=1; j<rounds; j++)	
	{
		player1[j] = player1[j] + player1[j-1];
	}
	
	for(k=1; k<rounds; k++)	
	{
		player2[k] = player2[k] + player2[k-1];
	}
	
	int lead[rounds];
	for(int i=0; i<rounds; i++)
	{
		lead[i] = player1[i] - player2[i];
	}
	
	int max,value;
	max = lead[0];
	value = lead[0];
	
	for (int i=0; i<rounds; i++)
	{
		if(abs(lead[i]) > max){
			max = abs(lead[i]);
			value = lead[i];
			}
	}		
	
	if(value>0)
		cout<<1<<" "<<max<<endl;
	else
		cout<<2<<" "<<max<<endl;
}
