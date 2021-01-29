#include<bits/stdc++.h>
using namespace std;

long long dp[35][35], ans;
int main()
{
	for(int i=1;i<=30;i++)
	{
		for(int j=1;j<=30;j++)
		{
			if(i==1||j==1) dp[i][j]=1;
			else dp[i][j]=dp[i-1][j]+dp[i][j-1];
		}
	}
	int R, C, W;
	scanf("%d%d%d", &R, &C, &W);
	for(int i=C;i<C+W;i++)
	{
		for(int j=R-C+1;j+i<=R+W;j++)
		{
			ans+=dp[i][j];
		}
	}
	printf("%lld", ans);
}
