#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	scanf("%d", &T);
	while(T--)
	{
		int N, K, C[1010]={0}, D[1010], ANS[1010], X, Y, W;
		vector<int> V[1010];
		queue<int> Q;
		scanf("%d%d", &N, &K);
		for(int i=1;i<=N;i++)
		{
			scanf("%d", &D[i]);
			ANS[i]=D[i];
		}
		for(int i=1;i<=K;i++)
		{
			scanf("%d%d", &X, &Y);
			V[X].push_back(Y);
			C[Y]++;
		}
		scanf("%d", &W);
		for(int i=1;i<=N;i++)
		{
			if(C[i]==0) Q.push(i);
		}
		while(!Q.empty())
		{
			int i=Q.front();
			Q.pop();
			for(auto j:V[i])
			{
				ANS[j]=max(ANS[j], D[j]+ANS[i]);
				C[j]--;
				if(C[j]==0) Q.push(j);
			}
		}
		printf("%d\n", ANS[W]);
	}
}
