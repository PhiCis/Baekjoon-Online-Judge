#include<bits/stdc++.h>
using namespace std;

int N, m, chk, ans;
int main()
{
	scanf("%d%d", &N, &m);
	if(N==1)
	{
		if(m==0) printf("1");
		else printf("2");
		return 0;
	}
	if(N==2)
	{
		if(m==0) printf("1");
		else if(m==1) printf("3");
		else printf("4");
		return 0;
	}
	for(int i=1;i<=2;i++)
	{
		if(chk<=m) ans++;
		if(chk+N/2<=m) ans++;
		if(chk+(N+1)/2<=m) ans++;
		if(chk+N<=m) ans++;
		chk+=(N+2)/3;
	}
	printf("%d", ans);
}
