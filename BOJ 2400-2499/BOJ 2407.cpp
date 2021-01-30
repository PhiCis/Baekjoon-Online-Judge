#include<bits/stdc++.h>
using namespace std;
int n, m;
int dp[110][110][40];
int main()
{
	scanf("%d%d", &n, &m);
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			if(i==j||j==0) dp[i][j][0]=1;
			else
			{
				for(int k=0;k<30;k++)
				{
					dp[i][j][k]+=dp[i-1][j][k]+dp[i-1][j-1][k];
					if(dp[i][j][k]>=10)
					{
						dp[i][j][k]-=10;
						dp[i][j][k+1]+=1;
					}
				}
			}
		}
	}
	int pnt=30;
	while(dp[n][m][pnt]==0) pnt--;
	for(int i=pnt;i>=0;i--)
	{
		printf("%d", dp[n][m][i]);
	}
}
