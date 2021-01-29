#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main()
{
	int T;
	scanf("%d", &T);
	for(int i=1;i<=T;i++)
	{
		char a[1010]={0};
		scanf("%s", a);
		int len=strlen(a);
		long long ans=1;
		if(len==1)
		{
			printf("Case #%d: %lld\n", i, ans);
			continue;
		}
		for(int j=0;j<len;j++)
		{
			if(j==0)
			{
				if(a[j]!=a[j+1]) ans=ans*2%MOD;
			}
			else if(j==len-1)
			{
				if(a[j]!=a[j-1]) ans=ans*2%MOD;
			}
			else
			{
				if(a[j-1]!=a[j]&&a[j]!=a[j+1]&&a[j+1]!=a[j-1]) ans=ans*3%MOD;
				else if(a[j-1]!=a[j]||a[j]!=a[j+1]||a[j+1]!=a[j-1]) ans=ans*2%MOD;
			}
		}
		printf("Case #%d: %lld\n", i, ans);
	}
}
