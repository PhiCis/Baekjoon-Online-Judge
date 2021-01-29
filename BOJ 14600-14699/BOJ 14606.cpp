#include<bits/stdc++.h>
using namespace std;

int N, DP[15];
int main()
{
	scanf("%d", &N);
	DP[1]=0;
	for(int i=2;i<=N;i++)
	{
		for(int j=1;j<i;j++)
		{
			DP[i]=max(DP[i], DP[j]+DP[i-j]+j*(i-j));
		}
	}
	printf("%d", DP[N]);
}
