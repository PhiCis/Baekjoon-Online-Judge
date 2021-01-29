#include<bits/stdc++.h>
using namespace std;
#define INF 1000000000
int N, dp[100010];
int main()
{
	scanf("%d", &N);
	for(int i=1;i<=N;i++)
	{
		dp[i]=INF;
		if(i>=7)
		{
			dp[i]=min(dp[i-7], min(dp[i-5], min(dp[i-2], dp[i-1])))+1;
		}
		else if(i>=5)
		{
			dp[i]=min(dp[i-5], min(dp[i-2], dp[i-1]))+1;
		}
		else if(i>=2)
		{
			dp[i]=min(dp[i-2], dp[i-1])+1;
		}
		else
		{
			dp[i]=dp[i-1]+1;
		}
	}
	printf("%d", dp[N]);
}
