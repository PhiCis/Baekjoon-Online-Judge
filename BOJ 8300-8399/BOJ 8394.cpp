#include<bits/stdc++.h>
using namespace std;

int n;
int DP[10000010];
int main()
{
	scanf("%d", &n);
	DP[1]=1;
	DP[2]=2;
	for(int i=3;i<=n;i++)
	{
		DP[i]=(DP[i-1]+DP[i-2])%10;
	}
	printf("%d", DP[n]);
} 
