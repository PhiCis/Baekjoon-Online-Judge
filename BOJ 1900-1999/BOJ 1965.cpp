#include<bits/stdc++.h>
using namespace std;

int N, A[1010], DP[1010], ans;
int main()
{
	scanf("%d", &N);
	for(int i=1;i<=N;i++)
	{
		scanf("%d", &A[i]);
	}
	for(int i=1;i<=N;i++)
	{
		DP[i]=1;
		for(int j=1;j<i;j++)
		{
			if(A[j]<A[i])
			{
				DP[i]=max(DP[i], DP[j]+1);
			}
		}
		if(ans<DP[i]) ans=DP[i];
	}
	printf("%d", ans);
}
