#include<bits/stdc++.h>
using namespace std;

int sz[11], MLT=1, mlt[11], tmt[1000010], cnt;
queue<pair<int ,int> > q;

int main()
{
	for(int i=0;i<11;i++)
	{
		scanf("%d", &sz[i]);
		mlt[i]=MLT;
		MLT*=sz[i];
	}
	for(int i=0;i<MLT;i++)
	{
		scanf("%d", &tmt[i]);
		if(tmt[i]==1) q.push({i, 0});
	}
	while(!q.empty())
	{
		int here, heretmp, herew[11], tmp;
		here=q.front().first, cnt=q.front().second;
		heretmp=here, tmp=MLT;
		q.pop();
		for(int i=10;i>=0;i--)
		{
			tmp/=sz[i];
			herew[i]=heretmp/tmp;
			heretmp%=tmp;
		}
		for(int i=0;i<11;i++)
		{
			if(herew[i]+1<sz[i]&&tmt[here+mlt[i]]==0) tmt[here+mlt[i]]=1, q.push({here+mlt[i], cnt+1});
		}
		for(int i=0;i<11;i++)
		{
			if(herew[i]-1>=0&&tmt[here-mlt[i]]==0) tmt[here-mlt[i]]=1, q.push({here-mlt[i], cnt+1});
		}
	}
	for(int i=0;i<MLT;i++)
	{
		if(tmt[i]==0)
		{
			printf("-1");
			return 0;
		}
	}
	printf("%d", cnt);
	return 0;
}
