#include<bits/stdc++.h>
using namespace std;

int dp[100010][6], N, ans, ansi;
int main()
{
	scanf("%d", &N);
	for(int i=1;i<=N;i++)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		if(a==b)
		{
			dp[i][a]=dp[i-1][a]+1;
		}
		else
		{
			dp[i][a]=dp[i-1][a]+1;
			dp[i][b]=dp[i-1][b]+1;
		}
		for(int j=1;j<=5;j++)
		{
			if(ans<dp[i][j]||(ans==dp[i][j]&&ansi>j))
			{
				ans=dp[i][j];
				ansi=j;
			}
		}
	}
	printf("%d %d", ans, ansi);
}
