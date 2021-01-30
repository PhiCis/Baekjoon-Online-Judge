#include<bits/stdc++.h>
using namespace std;
#define INF 1000000000
int N, A[1010], DP[1010];
int main()
{
	scanf("%d", &N);
	for(int i=1;i<=N;i++)
	{
		scanf("%d", &A[i]);
		DP[i]=INF;
	}
	DP[1]=0;
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=A[i]&&i+j<=N;j++)
		{
			DP[i+j]=min(DP[i+j], DP[i]+1);
		}
	}
	if(DP[N]==INF) printf("-1");
	else printf("%d", DP[N]);
}
