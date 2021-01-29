#include<bits/stdc++.h>
using namespace std;
int n, m;
map<int, int> chk;
int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &m);
		if(m==1&&chk[m]!=0)
		{
			printf("%d %d", chk[m], i);
			return 0;
		}
		chk[m]=i;
	}
	int f1=1, f2=2;
	while(f2<=1000000)
	{
		if(chk[f1]&&chk[f2])
		{
			printf("%d %d", chk[f1], chk[f2]);
			return 0;
		}
		f2+=f1;
		f1=f2-f1;
	}
	printf("impossible");
}
