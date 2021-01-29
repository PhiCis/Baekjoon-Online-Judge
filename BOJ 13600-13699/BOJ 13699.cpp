#include<bits/stdc++.h>
using namespace std;
int n;
long long DP[40];
int main()
{
	scanf("%d", &n);
	DP[0]=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<i;j++)
		{
			DP[i]+=DP[j]*DP[i-1-j];
		}
	}
	printf("%lld", DP[n]);
}
