#include<stdio.h>
int ans, i, j;
char a;
int main()
{
	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{
			scanf(" %c", &a);
			if(a=='F'&&(i+j)%2==0) ans++;
		}
	}
	printf("%d", ans);
}
