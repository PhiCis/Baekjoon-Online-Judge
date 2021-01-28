#include<bits/stdc++.h>
using namespace std;
#define INF 2000000000

int n, DP[100010];

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		DP[i]=INF;
	}
	for(int i=1;i<=n;i++)
	{
		if(i>=5)
		{
			DP[i]=min(DP[i-2]+1, min(DP[i-5]+1, INF));
		}
		else if(i>=2)
		{
			DP[i]=min(DP[i-2]+1, INF);
		}
	}
	printf("%d", DP[n]==INF?-1:DP[n]);
} 
