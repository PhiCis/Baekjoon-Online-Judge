#include<bits/stdc++.h>
using namespace std;
#define INF 2000000000
int n, DP[50050];
int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		DP[i]=INF;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j*j<=i;j++)
		{
			DP[i]=min(DP[i], DP[i-j*j]+1);
		}
	}
	printf("%d", DP[n]);
}
