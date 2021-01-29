#include<bits/stdc++.h>
using namespace std;

int H, N;
long long dp[35][35];

int main()
{
	scanf("%d%d", &H, &N);
	N=abs(H-N);
	for(int i=0;i<=N;i++)
	{
		dp[0][i]=1;
	}
	for(int i=1;i<=N;i++)
	{
		for(int j=i;j<=N;j++)
		{
			if(i==j) dp[i][j]=dp[i-1][j];
			else dp[i][j]=dp[i-1][j]+dp[i][j-1];
		}
	}
	printf("%lld", dp[N][N]);
}
