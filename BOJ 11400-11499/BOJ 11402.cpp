#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll N, K, M, ans=1;
ll C[2020][2020];

int main()
{
	scanf("%lld%lld%lld", &N, &K, &M);
	for(int i=0;i<=2000;i++)
	{
		for(int j=0;j<=i;j++)
		{
			if(j==0||j==i) C[i][j]=1;
			else C[i][j]=(C[i-1][j-1]+C[i-1][j])%M;
		}
	}
	while(N>0||K>0)
	{
		ans=ans*C[N%M][K%M]%M;
		N/=M, K/=M;
	}
	printf("%lld", ans);
}
