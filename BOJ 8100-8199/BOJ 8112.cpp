#include<bits/stdc++.h>
using namespace std;
int T;
int a, visited[1000010], ans[1000010], pnt;
int main()
{
	scanf("%d", &T);
	while(T--)
	{
		pnt=0;
		queue<int> q;
		scanf("%d", &a);
		for(int i=0;i<a;i++)
		{
			visited[i]=-1;
		}
		if(a==1)
		{
			printf("1\n");
			continue;
		}
		visited[1]=0;
		q.push(1);
		int now;
		while(1)
		{
			now=q.front();
			q.pop();
			if(now==0) break;
			if(visited[now*10%a]==-1)
			{
				visited[now*10%a]=now;
				q.push(now*10%a);
			}
			if(visited[(now*10+1)%a]==-1)
			{
				visited[(now*10+1)%a]=now;
				q.push((now*10+1)%a);
			}
		}
		/*
		for(int i=0;i<a;i++)
		{
			printf("%d ", visited[i]);
		}
		printf("\n");
		*/
		while(1)
		{
			
			if(visited[now]*10%a==now)
			{
				ans[++pnt]=0;
			}
			else
			{
				ans[++pnt]=1;
			}
			if(visited[now]==0)
			{
				while(pnt)
				{
					printf("%d", ans[pnt--]);
				}
				printf("\n");
				break;
			}
			now=visited[now];
		}
	}
}
