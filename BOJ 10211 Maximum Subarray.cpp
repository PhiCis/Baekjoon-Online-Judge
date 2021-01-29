#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	scanf("%d", &T);
	while(T--)
	{
		int N, a[1010], dp[1010], ans;
		scanf("%d", &N);
		for(int i=1;i<=N;i++)
		{
			scanf("%d", &a[i]);
		}
		dp[1]=ans=a[1];
		for(int i=2;i<=N;i++)
		{
			dp[i]=max(dp[i-1], 0)+a[i];
			ans=max(ans, dp[i]);
		}
		printf("%d\n", ans);
	}
}
