#include<bits/stdc++.h>
using namespace std;

int c, n, l1, l2, s1, s2, a[100010][5], dp[100010][3];
int main()
{
	scanf("%d", &c);
	while(c--)
	{
		scanf("%d", &n);
		scanf("%d%d%d%d", &l1, &l2, &s1, &s2);
		for(int i=1;i<=4;i++)
		{
			for(int j=1;j<n;j++)
			{
				scanf("%d", &a[j][i]);
			}
		}
		dp[1][1]=l1;
		dp[1][2]=l2;
		for(int i=2;i<=n;i++)
		{
			dp[i][1]=min(dp[i-1][1]+a[i-1][2], dp[i-1][2]+a[i-1][3]);
			dp[i][2]=min(dp[i-1][1]+a[i-1][1], dp[i-1][2]+a[i-1][4]);
		}
		printf("%d\n", min(dp[n][1]+s1, dp[n][2]+s2));
	}
}
