#include<bits/stdc++.h>
using namespace std;

int DP[20];
int main()
{
	int N, T[20], P[20];
	scanf("%d", &N);
	for(int i=1;i<=N;i++)
	{
		scanf("%d%d", &T[i], &P[i]);
	}
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(j+T[j]-1<=i) DP[i]=max(DP[i], DP[j-1]+P[j]);
		}
	}
	printf("%d", DP[N]);
}
