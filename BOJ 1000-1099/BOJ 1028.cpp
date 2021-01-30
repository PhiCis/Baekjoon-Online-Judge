#include<bits/stdc++.h>
using namespace std;

int R, C, a[1510][1510], dp[1510][1510][4], ans;

int main()
{
	scanf("%d%d", &R, &C);
	for(int i=1;i<=R;i++)
	{
		for(int j=1;j<=C;j++)
		{
			scanf("%1d", &a[i][j]);
		}
	}
	//0: UL, 1: UR
	for(int i=1;i<=R;i++)
	{
		for(int j=1;j<=C;j++)
		{
			if(a[i][j]==1)
			{
				dp[i][j][0]=dp[i-1][j-1][0]+1;
				dp[i][j][1]=dp[i-1][j+1][1]+1;
			}
		}
	}
	//2: DL, 3: DR
	for(int i=R;i>=1;i--)
	{
		for(int j=1;j<=C;j++)
		{
			if(a[i][j]==1)
			{
				dp[i][j][2]=dp[i+1][j-1][2]+1;
				dp[i][j][3]=dp[i+1][j+1][3]+1;
			}
		}
	}
	//case 1: (i, j)=U
	for(int i=1;i<=R;i++)
	{
		for(int j=1;j<=C;j++)
		{
			if(min(dp[i][j][2], dp[i][j][3])>ans)
			{
				for(int k=ans+1;k<=min(dp[i][j][2], dp[i][j][3]);k++)
				{
					if(i+k-1<=R&&j+k-1<=C&&j-k+1>=1&&min(dp[i+k-1][j+k-1][2], dp[i+k-1][j-k+1][3])>=k) ans=k;
				}
			}
		}
	}
	//case 2: (i, j)=L
	for(int i=1;i<=R;i++)
	{
		for(int j=1;j<=C;j++)
		{
			if(min(dp[i][j][1], dp[i][j][3])>ans)
			{
				for(int k=ans+1;k<=min(dp[i][j][1], dp[i][j][3]);k++)
				{
					if(i+k-1<=R&&i-k+1>=1&&j+k-1<=C&&min(dp[i-k+1][j+k-1][3], dp[i+k-1][j+k-1][1])>=k) ans=k;
				}
			}
		}
	}
	printf("%d", ans);
}
