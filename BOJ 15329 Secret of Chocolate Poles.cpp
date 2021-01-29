#include<bits/stdc++.h>
using namespace std;

int l, k;
long long ans, dp[110][2];
int main()
{
	scanf("%d%d", &l, &k);
	dp[1][0]=dp[k][0]=1;
	for(int i=2;i<=l;i++)
	{
		dp[i][1]+=dp[i-1][0];
		dp[i][0]+=dp[i-1][1];
		if(i>=k) dp[i][0]+=dp[i-k][1];
	}
	for(int i=1;i<=l;i++)
	{
		ans+=dp[i][0];
	}
	printf("%lld", ans);
}
