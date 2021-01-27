#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	scanf("%d", &T);
	while(T--)
	{
		int N;
		long long ANS=9e18;
		pair<long long, long long> P[25];
		scanf("%d", &N);
		for(int i=0;i<N;i++)
		{
			scanf("%lld%lld", &P[i].first, &P[i].second);
		}
		for(int i=0;i<(1<<N);i++)
		{
			int tmp=i, cnt=0;
			long long X=0, Y=0;
			while(tmp)
			{
				cnt+=(tmp&1);
				tmp>>=1;
			}
			if(cnt!=N/2) continue;
			for(int j=0;j<N;j++)
			{
				if(i&(1<<j))
				{
					X+=P[j].first;
					Y+=P[j].second;
				}
				else
				{
					X-=P[j].first;
					Y-=P[j].second;
				}
			}
			ANS=min(ANS, X*X+Y*Y);
		}
		printf("%.7lf\n", sqrt(ANS));
	}
}
