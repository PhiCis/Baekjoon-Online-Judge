#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int x1, x2, y1, y2, n, p1[60]={0}, p2[60]={0}, cx, cy, r, ans=0;
		scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
		scanf("%d", &n);
		for(int i=1;i<=n;i++)
		{
			scanf("%d%d%d", &cx, &cy, &r);
			if((x1-cx)*(x1-cx)+(y1-cy)*(y1-cy)<=r*r) p1[i]++;
			if((x2-cx)*(x2-cx)+(y2-cy)*(y2-cy)<=r*r) p2[i]++;
		}
		for(int i=1;i<=n;i++)
		{
			ans+=p1[i]^p2[i];
		}
		printf("%d\n", ans);
	}
}
