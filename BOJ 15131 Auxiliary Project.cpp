#include<bits/stdc++.h>
using namespace std;
int n, dp[1000010];
int main()
{
	scanf("%d", &n);
	for(int i=2;i<=n;i++)
	{
		if(i>=7&&i!=8)
		{
			dp[i]=max(dp[i], dp[i-7]+8);
		}
		if(i>=6&&i!=7)
		{
			dp[i]=max(dp[i], dp[i-6]+9);
		}
		if(i>=5&&i!=6)
		{
			dp[i]=max(dp[i], dp[i-5]+5);
		}
		if(i>=4&&i!=5)
		{
			dp[i]=max(dp[i], dp[i-4]+4);
		}
		if(i>=3&&i!=4)
		{
			dp[i]=max(dp[i], dp[i-3]+7);
		}
		if(i>=2&&i!=3)
		{
			dp[i]=max(dp[i], dp[i-2]+1);
		}
	}
	printf("%d", dp[n]);
}
