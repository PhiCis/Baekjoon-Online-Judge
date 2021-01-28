#include<bits/stdc++.h>
using namespace std;

int N, R[1010], G[1010], B[1010], DP[1010][3];
int main()
{
	scanf("%d", &N);
	for(int i=1;i<=N;i++)
	{
		scanf("%d%d%d", &R[i], &G[i], &B[i]);
	}
	DP[1][0]=R[1];
	DP[1][1]=G[1];
	DP[1][2]=B[1];
	for(int i=2;i<=N;i++)
	{
		DP[i][0]=min(DP[i-1][1], DP[i-1][2])+R[i];
		DP[i][1]=min(DP[i-1][2], DP[i-1][0])+G[i];
		DP[i][2]=min(DP[i-1][0], DP[i-1][1])+B[i];
	}
	printf("%d", min(DP[N][0], min(DP[N][1], DP[N][2])));
}
