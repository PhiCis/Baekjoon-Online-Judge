#include<bits/stdc++.h>
using namespace std;
int N;
char a[550000];
int main()
{
	for(int i=0;i<531441;i++)
	{
		int tmp=i;
		while(tmp)
		{
			if(tmp%3==1)
			{
				a[i]=' ';
				goto skip;
			}
			tmp/=3;
		}
		a[i]='-';
		skip:;
	}
	while(scanf("%d", &N)==1)
	{
		int tmp=1;
		for(int i=0;i<N;i++) tmp*=3;
		for(int i=0;i<tmp;i++) printf("%c", a[i]);
		printf("\n");
	}
}
