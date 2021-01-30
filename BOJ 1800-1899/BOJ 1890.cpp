#include<bits/stdc++.h>
using namespace std;
int N, a[110][110];
long long dp[110][110];
int main()
{
	scanf("%d", &N);
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=N;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	dp[1][1]=1;
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=N;j++)
		{
			if(a[i][j]==0) continue;
			if(i+a[i][j]<=N) dp[i+a[i][j]][j]+=dp[i][j];
			if(j+a[i][j]<=N) dp[i][j+a[i][j]]+=dp[i][j];
		}
	}
	printf("%lld", dp[N][N]);
}
