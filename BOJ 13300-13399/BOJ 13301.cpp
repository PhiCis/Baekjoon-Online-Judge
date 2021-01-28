#include<bits/stdc++.h>
using namespace std;

int N;
long long DP[90];
int main()
{
	scanf("%d", &N);
	DP[1]=4;
	DP[2]=6;
	for(int i=3;i<=N;i++)
	{
		DP[i]=DP[i-1]+DP[i-2];
	}
	printf("%lld", DP[N]);
}
