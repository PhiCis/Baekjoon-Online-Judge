#include<bits/stdc++.h>
using namespace std;
int n, k, a[110], dp[2][10010];
int main()
{
	scanf("%d%d", &n, &k);
	dp[0][0]=dp[1][0]=1;
	
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=k;j++)
		{
			dp[i&1][j]=dp[(i-1)&1][j];
			if(j>=a[i])
			{
				dp[i&1][j]+=dp[i&1][j-a[i]];
			}
		}
	}
	printf("%d", dp[n&1][k]);
}
