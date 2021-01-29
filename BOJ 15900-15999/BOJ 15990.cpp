#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000009

int T, n;
long long DP[100010][5];
int main()
{
	scanf("%d", &T);
	DP[1][1]=1;
	DP[2][2]=1;
	DP[3][1]=1;
	DP[3][2]=1;
	DP[3][3]=1;
	for(int i=4;i<=100000;i++)
	{
		DP[i][1]=(DP[i-1][2]+DP[i-1][3])%MOD;
		DP[i][2]=(DP[i-2][1]+DP[i-2][3])%MOD;
		DP[i][3]=(DP[i-3][1]+DP[i-3][2])%MOD;
	}
	while(T--)
	{
		scanf("%d", &n);
		printf("%lld\n", (DP[n][1]+DP[n][2]+DP[n][3])%MOD);
	}
}
