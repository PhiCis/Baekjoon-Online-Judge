#include<bits/stdc++.h>
using namespace std;

int K;
long long DP[50];

int main()
{
	scanf("%d", &K);
	DP[0]=0;
	DP[1]=1;
	for(int i=2;i<=K;i++)
	{
		DP[i]=DP[i-1]+DP[i-2];
	}
	printf("%lld %lld", DP[K-1], DP[K]);
}
