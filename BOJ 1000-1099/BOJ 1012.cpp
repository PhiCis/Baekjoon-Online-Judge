#include<stdio.h>
int t, m, n, k, i, j, l, a[60][60], c[60][60], ans, x, y;
int d[4][2]={-1, 0, 0, -1, 0, 1, 1, 0};
void f(int j, int l)
{
	c[j][l]=1;
	for(int i=0;i<4;i++)
	{
		if(c[j+d[i][0]][l+d[i][1]]==0&&a[j+d[i][0]][l+d[i][1]]==1)
		{
			f(j+d[i][0], l+d[i][1]);
		}
	}
}
int main()
{
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
		scanf("%d%d%d", &m, &n, &k);
		for(j=0;j<=m+1;j++)
		{
			for(l=0;l<=n+1;l++)
			{
				a[j][l]=c[j][l]=0;
			}
		}
		for(j=0;j<k;j++)
		{
			scanf("%d%d", &x, &y);
			a[x+1][y+1]=1;
		}
		for(j=1;j<=m;j++)
		{
			for(l=1;l<=n;l++)
			{
				if(c[j][l]==0&&a[j][l]==1)
				{
					ans++;
					f(j, l);
				}
			}
		}
		printf("%d\n", ans);
		ans=0;
	}
}
