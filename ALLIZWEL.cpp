#include<stdio.h>
#include<string>
#include<cstring>
#include<stdlib.h>
using namespace std;

int R, C;
int x[8]={1,1,0,-1,-1,-1,0,1};
int y[8]={0,1,1,1,0,-1,-1,-1};
char pattern[10]={'A','L','L','I','Z','Z','W','E','L','L'};
int visited[101][101];

bool checkValid(int i, int j)
{
	if(i>=0 && i<R && j>=0 && j<C)
		return true;

	return false;
}

string dfs(int i, int j, char** arr, int pattern_no)
{
	int g_i;
	string ans;
	
	visited[i][j]=1;
	if(pattern_no==9)
	{
		return "YES";
	}
	else
	{
		for(g_i=0;g_i<8;g_i++)	
		{
			if(checkValid(i+x[g_i],j+y[g_i]))
			{
				if(!visited[i+x[g_i]][j+y[g_i]] && arr[i+x[g_i]][j+y[g_i]]==pattern[pattern_no+1])
				{
					visited[i+x[g_i]][j+y[g_i]]=1;
					ans=dfs(i+x[g_i],j+y[g_i],arr,pattern_no+1);
					if(ans=="YES")
					{
						return "YES";
					}
				}
			}
		}
	}
	visited[i][j]=0;
	return "NO";
}

int main()
{
	int t,i=0,j=0,pattern_no=0;
	string main_ans;
	scanf("%d",&t);
	
	abc: while(t--)
	{
		scanf("%d %d",&R,&C);
		pattern_no=0;
		memset(visited,0,sizeof(visited));
		char** arr=new char*[R];
		for(i=0;i<R;i++)
			arr[i]=new char[C];

		for(i=0;i<R;i++)
			for(j=0;j<C;j++)
		{
				scanf("\n%c",&arr[i][j]);
		}

		if(R*C<10)
		{
			printf("NO\n");
			continue;
		}

		for(i=0;i<R;i++)
			for(j=0;j<C;j++)
				if(arr[i][j]=='A')
				{
					main_ans=dfs(i,j,arr,0);
					if(main_ans=="YES")
					{	
						printf("YES\n");
						goto abc;
					}
				}
		printf("NO\n");
	}

	return 0;
}
