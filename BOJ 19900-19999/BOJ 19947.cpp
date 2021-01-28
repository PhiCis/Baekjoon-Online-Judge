#include<bits/stdc++.h>
using namespace std;

int H, Y, DP[15];
int main()
{
	scanf("%d%d", &H, &Y);
	DP[0]=H;
	for(int i=1;i<=Y;i++)
	{
		if(i>=5) DP[i]=max((int)(1.05*DP[i-1]), max((int)(1.2*DP[i-3]), (int)(1.35*DP[i-5])));
		else if(i>=3) DP[i]=max((int)(1.05*DP[i-1]), (int)(1.2*DP[i-3]));
		else DP[i]=(int)(1.05*DP[i-1]);
	}
	printf("%d", DP[Y]);
}
