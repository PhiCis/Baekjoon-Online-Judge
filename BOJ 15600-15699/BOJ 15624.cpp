#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int n;
long long dp[1000010];
int main()
{
	scanf("%d", &n);
	dp[0]=0, dp[1]=1;
	for(int i=2;i<=n;i++)
	{
		dp[i]=(dp[i-1]+dp[i-2])%MOD;
	}
	printf("%lld", dp[n]);
}
