#include<bits/stdc++.h>
using namespace std;

int t, n;
long long koong[70];
int main()
{
	scanf("%d", &t);
	koong[0]=1;
	koong[1]=1;
	koong[2]=2;
	koong[3]=4;
	for(int i=4;i<=67;i++)
	{
		koong[i]=koong[i-1]+koong[i-2]+koong[i-3]+koong[i-4];
	}
	while(t--)
	{
		scanf("%d", &n);
		printf("%lld\n", koong[n]);
	}
}
