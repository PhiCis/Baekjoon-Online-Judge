#include<bits/stdc++.h>
using namespace std;
int H, W, N, a[1010][1010], dp[1010][1010], ans[1010][1010];
int main()
{
	scanf("%d%d%d", &H, &W, &N);
	for(int i=1;i<=H;i++)
	{
		for(int j=1;j<=W;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	dp[1][1]=N-1;
	for(int k=2;k<H+W;k++)
	{
		for(int i=1;i<=H;i++)
		{
			int j=k-i;
			if(j<=0||j>W) continue;
			if(a[i][j]==0)
			{
				dp[i+1][j]+=(dp[i][j]+1)/2;
				dp[i][j+1]+=dp[i][j]/2;
			}
			if(a[i][j]==1)
			{
				dp[i+1][j]+=dp[i][j]/2;
				dp[i][j+1]+=(dp[i][j]+1)/2;
			}
		}
	}
	for(int i=1;i<=H;i++)
	{
		for(int j=1;j<=W;j++)
		{
			if(dp[i][j]&1) ans[i][j]=1-a[i][j];
			else ans[i][j]=a[i][j];
		}
	}
	int x=1, y=1;
	while(x<=H&&y<=W)
	{
		if(ans[x][y]==1) y++;
		else x++;
	}
	printf("%d %d", x, y);
}
